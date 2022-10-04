int	ft_isdigit(int c)
{
	if (c > 47 && c < 58) // ascii tablosunda 0-9 arasındaki sayılar 48-57 arasındadır.
		return (1);
	else
		return (0);
}
