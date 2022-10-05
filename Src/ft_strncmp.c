#include "../Lib/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0) // Eğer karşılştırma sayısı 0 ise
		return (0); // 0 döndürüyoruz.
	while (s1[i] == s2[i] && s1[i] != '\0') // Eğer s1 ve s2 eşit ve s1 null değilse
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return (s1[i] - s2[i]); // Eğer s1 ve s2 eşit değilse s1 ve s2 nin farkını döndürüyoruz.
}
