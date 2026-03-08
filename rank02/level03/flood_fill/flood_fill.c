typedef struct  s_point
{
int           x;
int           y;
}               t_point;

void	fill(char **tab, int rows, int collums, int y, int x, char filled, char zone)
{
	if (y < 0 || y >= rows || x < 0 || x >= collums)
		return;
	if (tab[y][x] == filled || tab[y][x] != zone)
		return;
	else
		tab[y][x] = filled;
	fill(tab, rows, collums, y - 1, x, filled, zone);
	fill(tab, rows, collums, y + 1, x, filled, zone);
	fill(tab, rows, collums, y, x - 1, filled, zone);
	fill(tab, rows, collums, y, x + 1, filled, zone);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	char filled = 'F';
	int rows = size.y;
	int collums = size.x;
	int y = begin.y;
	int x = begin.x;
	char zone = tab[y][x];
	fill(tab, rows, collums, y, x, filled, zone);
}