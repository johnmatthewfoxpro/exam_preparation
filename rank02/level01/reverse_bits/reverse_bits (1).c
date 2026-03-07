unsigned char	reverse_bits(unsigned char octet)
{
	int bit = 0;
	//int tmp = 0;
	unsigned char rtn = 0;

	while (bit < 8)
	{
		rtn = rtn * 2 + (octet % 2);
		octet = octet / 2;
		bit ++;
	}

	return (rtn);
}
