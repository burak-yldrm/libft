char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c) // s'in i. elemanı c ile eşitse
			return ((char *)&s[i]); // s'in i. elemanının adresini döndür
		i++;
	}
	return (0);
}
