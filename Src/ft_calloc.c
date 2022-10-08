#include "../Lib/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*dst;

	total = size * count;
	dst = malloc(total); // Malloc fonksiyonu bellekte yer ayırmak için kullanılır.
	if (!dst) // Eğer malloc fonksiyonu başarısız olursa NULL döndürür.
		return (0);
	ft_memset(dst, 0, total); // ft_memset fonksiyonu bellekteki değerleri değiştirmek için kullanılır.
	return (dst);
}
