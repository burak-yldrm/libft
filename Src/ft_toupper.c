int	ft_toupper(int c)
{
	if (c > 96 && c < 123) //ascii tablosunda 97-122 arasındaki sayılar küçük harflerdir.
		return (c - 32); //ascii tablosunda küçük harfler büyük harflerden 32 fazla olduğu için 32 çıkartılır.
	else
		return (c);
}
