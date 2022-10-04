int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127) //standart ascii tablosunda 0-127 arasındaki sayılar ascii karakterleridir.
		return (1);
	else
		return (0);
}
