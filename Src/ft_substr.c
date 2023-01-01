#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s) // Eğer s NULL ise NULL döndür.
		return (NULL);
	i = 0;
	if (ft_strlen(s) < start) // Eğer s'nin uzunluğu start'tan küçükse boş bir string döndür.
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
