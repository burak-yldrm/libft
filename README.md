# LIBFT
Bu proje kişiselleştirilmiş bir C kütüphane projesidir, içerisinde C de yer alan bazı fonksiyonların benzerleri(atoi, memcpy, strlen vb.) yazılmış olup struct yapılarına da yer verilmiştir.

- **ft_isalpha** : `int	ft_isalpha(int c);` fonksiyonu, c parametresi ile verilen karakterin alfabedeki bir harf olup olmadığını kontrol eder. Eğer harf ise 1, değilse 0 döndürür.

------------


- **ft_isdigit** : `int	ft_isdigit(int c);` fonksiyonu, c parametresi ile verilen karakterin rakam olup olmadığını kontrol eder. Eğer rakam ise 1, değilse 0 döndürür.

------------


- **ft_isalnum** : `int	ft_isalnum(int c);` fonksiyonu, c parametresi ile verilen karakterin alfabedeki bir harf veya rakam olup olmadığını kontrol eder. Eğer harf veya rakam ise 1, değilse 0 döndürür.

------------


- **ft_isascii** : `int	ft_isascii(int c);` fonksiyonu, c parametresi ile verilen karakterin ASCII karakterler arasında olup olmadığını kontrol eder. Eğer ASCII karakterler arasında ise 1, değilse 0 döndürür.

------------


- **ft_isprint** : `int	ft_isprint(int c);` fonksiyonu, c parametresi ile verilen karakterin yazdırılabilir bir karakter olup olmadığını kontrol eder. Eğer yazdırılabilir bir karakter ise 1, değilse 0 döndürür.

------------


- **ft_strlen** : `size_t	ft_strlen(const char *s);` fonksiyonu, s parametresi ile verilen karakter dizisinin uzunluğunu döndürür.

------------


- **ft_toupper** : `int	ft_toupper(int c);` fonksiyonu, c parametresi ile verilen karakterin küçük harf olup olmadığını kontrol eder. Eğer küçük harf ise büyük harfe çevirir ve döndürür, değilse c parametresini döndürür.

------------


- **ft_tolower** : `int	ft_tolower(int c);` fonksiyonu, c parametresi ile verilen karakterin büyük harf olup olmadığını kontrol eder. Eğer büyük harf ise küçük harfe çevirir ve döndürür, değilse c parametresini döndürür.

------------

- **ft_strchr** : `char	*ft_strchr(const char *s, int c);` fonksiyonu, s parametresi ile verilen karakter dizisinde c parametresi ile verilen karakteri arar. Eğer karakter dizisinde c parametresi ile verilen karakter var ise ilk bulduğu karakterin adresini döndürür, yok ise NULL döndürür.

------------

- **ft_strrchr** : `char	*ft_strrchr(const char *s, int c);` fonksiyonu, s parametresi ile verilen karakter dizisinde c parametresi ile verilen karakteri sondan başa doğru arar. Eğer karakter dizisinde c parametresi ile verilen karakter var ise karakterin adresini döndürür, yok ise NULL döndürür.

------------

- **ft_strncmp** : `int	ft_strncmp(const char *s1, const char *s2, size_t n);` fonksiyonu, s1 ve s2 parametreleri ile verilen karakter dizilerini n parametresi ile verilen sayı kadar karşılaştırır. Eğer s1 ve s2 parametreleri ile verilen karakter dizileri aynı ise 0 döndürür, s1 karakter dizisi s2 karakter dizisinden büyük ise 0'dan büyük sayı döndürür, s1 karakter dizisi s2 karakter dizisinden küçük ise 0'dan küçük sayı döndürür.

------------

- **ft_strlcpy** : `size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);` fonksiyonu, src parametresi ile verilen karakter dizisini dst parametresi ile verilen karakter dizisine kopyalar. Kopyalama işlemi dstsize parametresi ile verilen sayı kadar yapılır. Eğer src parametresi ile verilen karakter dizisi dst parametresi ile verilen karakter dizisinden büyük ise dstsize parametresi ile verilen sayı kadar kopyalama yapılır ve dstsize parametresi ile verilen sayıdan 1 eksik sayı kadar karakter kopyalanır. Eğer src parametresi ile verilen karakter dizisi dst parametresi ile verilen karakter dizisinden küçük ise src parametresi ile verilen karakter dizisinin uzunluğu kadar kopyalama yapılır ve src parametresi ile verilen karakter dizisinin uzunluğu kadar karakter kopyalanır. Fonksiyonun döndürdüğü değer ise kopyalama işlemi sonucunda dst parametresi ile verilen karakter dizisindeki karakter sayısıdır.

------------

- **ft_strlcat** : `size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);` fonksiyonu, src parametresi ile verilen karakter dizisini dst parametresi ile verilen karakter dizisinin sonuna ekler. Kopyalama işlemi dstsize parametresi ile verilen sayı kadar yapılır. Eğer src parametresi ile verilen karakter dizisi dst parametresi ile verilen karakter dizisinden büyük ise dstsize parametresi ile verilen sayı kadar kopyalama yapılır ve dstsize parametresi ile verilen sayıdan 1 eksik sayı kadar karakter kopyalanır. Eğer src parametresi ile verilen karakter dizisi dst parametresi ile verilen karakter dizisinden küçük ise src parametresi ile verilen karakter dizisinin uzunluğu kadar kopyalama yapılır ve src parametresi ile verilen karakter dizisinin uzunluğu kadar karakter kopyalanır. Fonksiyonun döndürdüğü değer ise kopyalama işlemi sonucunda dst parametresi ile verilen karakter dizisindeki karakter sayısıdır.

------------

- **ft_strnstr** : `char	*ft_strnstr(const char *haystack, const char *needle, size_t len);` fonksiyonu, haystack parametresi ile verilen karakter dizisinde needle parametresi ile verilen karakter dizisini len parametresi ile verilen sayı kadar arar. Eğer haystack parametresi ile verilen karakter dizisinde needle parametresi ile verilen karakter dizisi var ise ilk bulduğu karakter dizisinin adresini döndürür, yok ise NULL döndürür.

------------