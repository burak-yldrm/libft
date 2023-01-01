#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*	AŞAĞIDAKİ KODLAR FONKSİYONU DAHA İYİ ANLAMAMIZ İÇİN YAZILMIŞTIR.	*/
/*
	int main()
	{
		t_list	*new;
		char	*str = "Hello World!";
		new = ft_lstnew(str);
		printf("%s\n", new->content);
		return (0);
	}
*/