unsigned char	reverse_bits(unsigned char octet)
{
	int bits = 0;
	char rtn = 0;

	while (bits < 8)
	{
		rtn = (rtn << 1) | (octet & 1);
		octet >>= 1;
		bits ++;
	}
	return (rtn);
}