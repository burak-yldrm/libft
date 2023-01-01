#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	size_t	i;

	temp = lst;
	i = 0;
	if (!lst || !temp)
		return (0);
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

/*	AŞAĞIDAKİ KODLAR FONKSİYONU DAHA İYİ ANLAMAMIZ İÇİN YAZILMIŞTIR.	*/
/*
	int main()
	{
		t_list	*new;
		char	*str = "Hello World!";
		int		i;

		new = ft_lstnew(str);
		i = ft_lstsize(new);
		printf("%d\n", i); // 1
	}
*/