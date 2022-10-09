#include "../Lib/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	x;

	x = 0;
	if (!s || !f)
		return ;
	while (s[x])
	{
		(*f)(x, &s[x]);
		x++;
	}
}

/*	AŞAĞIDAKİ KODLAR FONKSİYONU DAHA İYİ ANLAMAMIZ İÇİN YAZILMIŞTIR.	*/
/*
	void	f(unsigned int i, char *c)
	{
		*c = *c + i;
	}

	int	main(void)
	{
		char	*str = "Hello World!";
		ft_striteri(str, f);
		printf("%s", str);
		return (0);
	}
*/
