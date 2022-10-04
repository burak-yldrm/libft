int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') // ascii tablosunda 0-9 arasındaki sayılar 48-57 arasındadır.
		|| (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
