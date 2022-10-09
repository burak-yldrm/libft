#include "../Lib/libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/*	AŞAĞIDAKİ KODLAR FONKSİYONU DAHA İYİ ANLAMAMIZ İÇİN YAZILMIŞTIR.	*/
/*
	int	main(void)
	{
		int	fd;

		fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
		(NOT: Çalıştıracağınız dosyanın bulunduğu dizinde test.txt adında bir dosya oluşturun.)
		// O_WRONLY: Dosyayı sadece yazmak için açar.
		// O_CREAT: Dosya yoksa oluşturur.
		// O_TRUNC: Dosya varsa içeriğini siler.
		// 0644: Dosyanın izinleri.
		ft_putstr_fd("Hello World!", fd);
		close(fd);
		return (0);
	}
*/
