#include "../Lib/libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	count; //size_t unsigned int türünden bir değişken tanımlıyoruz.

	count = 0; //count'u 0'a eşitliyoruz.
	while (s[count] != '\0') //s dizisinin count'ıncı elemanı '\0' değilse
		count++; //count'u 1 arttırıyoruz.
	return (count); //count'u döndürüyoruz.
}
