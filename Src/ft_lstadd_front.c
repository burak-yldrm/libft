#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

/*	AŞAĞIDAKİ KODLAR FONKSİYONU DAHA İYİ ANLAMAMIZ İÇİN YAZILMIŞTIR.	*/
/*
	int main()
	{
		t_list	*new;
		t_list	*new2;
		char	*str = "Hello World!";
		char	*str2 = "Hello World2!";
		new = ft_lstnew(str);
		new2 = ft_lstnew(str2);
		ft_lstadd_front(&new, new2);
		printf("%s\n", new->content);
		printf("%s\n", new->next->content);
		return (0);
	}
*/
