#include <stdarg.h>
#include <stdio.h>
#include <ctype.h>

int match_space(FILE *f)
{
    int c = fgetc(f);

	while (c != EOF && isspace(c))
		c = fgetc(f);
	if (c != EOF)
		ungetc(c, f);

    return (0);
}

int match_char(FILE *f, char c)
{
    int ch = fgetc(f);
    if (ch == c)
        return 1;
    if (ch != EOF)
        ungetc(ch, f);
    return -1;
}

int scan_char(FILE *f, va_list ap)
{

	char *c = va_arg(ap, char *);
	int i = fgetc(f);

	if(i == EOF)
		return (EOF);
	*c = (char)i;

    return (1);
}

int scan_int(FILE *f, va_list ap)
{
    int *i = va_arg(ap, int *);
	int c = fgetc(f);
	int value = 1;
	int number = 0;

	if(c == '-' || c == '+')
	{
		if (c == '-')
			value = -1;
		c = fgetc(f);
	}
	if(!isdigit(c))
	{
		if (c != EOF)
			ungetc(c, f);
		return (0);
	}
	while (isdigit(c))
	{
		number = number * 10 + (c - '0');
		c = fgetc(f);
	}
	if (c != EOF)
		ungetc(c, f);
	*i = number * value;
    return (1);
}

int scan_string(FILE *f, va_list ap)
{
    char *str = va_arg(ap, char *);
	int c = fgetc(f);
	int i = 0;

	if (c == EOF)
	{
		ungetc(c, f);
		return (0);
	}
	while (c != EOF && !isspace(c))
	{
		str[i] = c;
		i++;
		c = fgetc(f);
	}
	str[i] = '\0';
	if (c != EOF)
		ungetc(c, f);
	if (i == 0)
		return (0);
    return (1);
}


int	match_conv(FILE *f, const char **format, va_list ap)
{
	switch (**format)
	{
		case 'c':
			return scan_char(f, ap);
		case 'd':
			match_space(f);
			return scan_int(f, ap);
		case 's':
			match_space(f);
			return scan_string(f, ap);
		case EOF:
			return -1;
		default:
			return -1;
	}
}

int ft_vfscanf(FILE *f, const char *format, va_list ap)
{
	int nconv = 0;

	int c = fgetc(f);
	if (c == EOF)
		return EOF;
	ungetc(c, f);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (match_conv(f, &format, ap) != 1)
				break;
			else
				nconv++;
		}
		else if (isspace(*format))
		{
			if (match_space(f) == -1)
				break;
		}
		else if (match_char(f, *format) != 1)
			break;
		format++;
	}

	if (ferror(f))
		return EOF;
	return nconv;
}


int ft_scanf(const char *format, ...)
{
	va_list ap;

	va_start(ap,format);
	int ret = ft_vfscanf(stdin, format, ap);
	va_end(ap);
	return ret;
}

// int main(void)
// {
// 	int n;
// 	char c;
// 	char str[100];

// 	ft_scanf("%d %s %c", &n, str, &c);
// 	// scanf("%d %s %c", &n, str, &c);

// 	printf("no = %d, str = %s, char = %c", n, str, c);
// 	return (0);
// }