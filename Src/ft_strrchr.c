#include "../Lib/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s); //s'in uzunluğunu i'ye atıyoruz.
	while (i > 0) // i 0'dan büyük olduğu sürece
	{
		if (s[i] == (char)c) // s'in i. elemanı c ile eşitse
			return ((char *)&s[i]); // s'in i. elemanının adresini döndürüyoruz.
		i--;
	}
	return (NULL);
}
