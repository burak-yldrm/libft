#include "../Lib/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;

	dst = (char *) malloc(ft_strlen(s1) + 1); // Bellekte kopyalanacak stringin uzunluğu kadar yer ayırır.
	if (!dst) // Eğer malloc fonksiyonu başarısız olursa NULL döndürür.
		return (0);
	ft_memcpy(dst, s1, ft_strlen(s1) + 1); // +1 eklenmesinin sebebi NULL karakterinin de kopyalanmasıdır.
	return (dst);
}
