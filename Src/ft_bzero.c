#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n); // NULL karakterinin sayısal değeri 0'dır. ('\0' == 0)
}
