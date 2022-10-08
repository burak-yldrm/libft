#include "../Lib/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!s || !str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*	AŞAĞIDAKİ KODLAR FONKSİYONU DAHA İYİ ANLAMAMIZ İÇİN YAZILMIŞTIR.	*/
/*
	char	*f(unsigned int i, char c)
	{
		return (c + i);
	}

	int	main(void)
	{
		char	*str = "Hello World!";
		char	*str2 = ft_strmapi(str, f);
		printf("%s", str2);
		return (0);
	}
*/
