int	ft_isprint(int c)
{
	if (c > 31 && c < 127) //ascii tablosunda 32-126 arasındaki sayılar yazılabilir karakterlerdir.
		return (1);
	else
		return (0);
}
