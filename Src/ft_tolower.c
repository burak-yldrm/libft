int	ft_tolower(int c)
{
	if (c > 64 && c < 91) //ascii tablosunda 65-90 arasındaki sayılar büyük harflerdir.
		return (c + 32); //ascii tablosunda büyük harfler küçük harflerden 32 az olduğu için 32 eklenir.
	else
		return (c);
}
