char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	if(to_find == '\0')
		return (str);
	while(str[i] != '\0')
	{
		while(str[i + j] == to_find[j] && to_find != '\0')
			j++;
		if(to_find == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
