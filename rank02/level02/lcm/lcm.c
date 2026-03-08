unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int lcm = 0;
	unsigned int tmp= 0;
	unsigned int gcd = 0;
	unsigned int n1;
	unsigned int n2;

	if (!(a == 0 || b ==0))
	{
		n1 = a;
		n2 = b;
		while (n2 != 0)
		{
			tmp = n2;
			n2 = n1 % n2;
			n1 = tmp;
		}
		gcd = n1;
		lcm = (a * b) / (gcd);
	}
	return(lcm);
}

//LCM(A,B) = a*b / GCD(a,b);

// unsigned int gcd(unsigned int a, unsigned int b)
// {
//     while (b != 0)
//     {
//         unsigned int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// unsigned int lcm(unsigned int a, unsigned int b)
// {
//     if (a == 0 || b == 0)
//         return 0; // LCM of 0 with anything is 0
//     return (a / gcd(a, b)) * b;
// }