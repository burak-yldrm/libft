#include "../Lib/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	i;

	if (!dst || !src) // dst veya src null ise 0 döndür.
		return (0);
	count = ft_strlen(src); // src nin uzunluğunu count'a ata.
	i = 0;
	if (dstsize != 0) // dstsize 0 değilse
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i]; // dst'nin i. elemanına src'nin i. elemanını ata.
			i++;
		}
		dst[i] = '\0'; // dst nin sonuna null karakteri ekle.
	}
	return (count);
}
