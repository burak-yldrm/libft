int	ft_atoi(const char *str)
{
	int				a;
	int				b;
	unsigned long	c;

	a = 0;
	b = 1;
	c = 0;
	while (str[a] == ' ' || str[a] == '\n' || str[a] == '\t'
		|| str[a] == '\v' || str[a] == '\f' || str[a] == '\r')
		a++;
	if (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			b = -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		c = (c * 10) + (str[a] - '0');
		/*
			Sayı: 1234
			1. adımda: c = 0 * 10 + (1 - 0) = 1
			2. adımda: c = 1 * 10 + (2 - 0) = 12
			3. adımda: c = 12 * 10 + (3 - 0) = 123
			4. adımda: c = 123 * 10 + (4 - 0) = 1234
			Bir string karakterden 48 çıkarılırsa, o karakterin sayısal değeri elde edilir.
		*/
		a++;
	}
	return (c * b);
}
