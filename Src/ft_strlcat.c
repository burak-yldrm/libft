#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;

	if (dstsize <= ft_strlen(dst)) // dstsize dst'nin uzunluğundan küçükse
		return (dstsize + ft_strlen(src)); // dstsize + src'nin uzunluğunu döndür.
	a = ft_strlen(dst); // dst'nin uzunluğunu a'ya ata.
	b = 0;
	while (src[b] != '\0' && a < dstsize - 1)
	{
		dst[a] = src[b]; // dst'nin a. elemanına src'nin b. elemanını ata.
		a++;
		b++;
	}
	dst[a] = '\0'; // dst'nin a. elemanını null yap.
	return (ft_strlen(dst) + ft_strlen(&src[b])); // dst'nin uzunluğunu + src'nin b. elemanından sonrasının uzunluğunu döndür.
}
