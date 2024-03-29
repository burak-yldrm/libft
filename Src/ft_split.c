#include "libft.h"

static int	count_word(const char *str, char c) // Verilen delimiter'a göre kaç adet kelime olduğunu bulur.
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish) // Verilen string'in start'tan finish'e kadar olan kısmını kopyalar.
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	int			index;
	char		**split;

	split = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
		/*
		** Eğer delimiter değilse ve index -1 ise index'i i'ye eşitle.
		*/
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		/*
		** Eğer delimiter'a denk gelmişse veya string'in sonuna gelmişse ve index >= 0 ise
		*/
		{
			split[j++] = word_dup(s, index, i); // index'ten i'ye kadar olan kısmı kopyala.
			index = -1;
		}
		i++;
	}
	split[j] = 0; // Son kelimeyi split'e ekledikten sonra split'in sonuna NULL ekliyoruz.
	return (split);
}
