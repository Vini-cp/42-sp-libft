int	ft_isspace(int c)
{
	if ((c >= 7 && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}
