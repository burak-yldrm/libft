#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (needle[0] == '\0') // Eğer aranacak kelime boşsa
		return ((char *)haystack); // haystack'i döndür.
	while (haystack[a] != '\0')
	{
		b = 0;
		while (haystack [a + b] == needle[b] && a + b < len)
		{
			if (haystack [a + b] == '\0' && needle[b] == '\0')
				return ((char *)&haystack[a]);
			b++;
		}
		if (needle[b] == '\0')
			return ((char *)haystack + a); // haystack'in a. indisi döndür.
		a++;
	}
	return (0);
}
