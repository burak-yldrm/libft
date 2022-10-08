#include "../Lib/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*dsts;

	dsts = dst;
	if (!dst && !src)
		return (NULL);
	while (n--)
		*((char *)dst++) = *((const char *)src++); // Çift pointer kullanımı direkt array üzerinde değil de array'in içerisinde ki harf üzerinde işlem yapmamızı sağlıyor.
	return (dsts);
}
