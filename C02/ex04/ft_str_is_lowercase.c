#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	int one;
	int two;
	int three;

	char	yes[] = "testo";
	char	no[] = "teSto";
	char	zero[] = "";

	one = ft_str_is_lowercase(yes);
	two = ft_str_is_lowercase(no);
	three = ft_str_is_lowercase(zero);

	printf("%d\n", one);
	printf("%d\n", two);
	printf("%d\n", three);
	return 0;
}
		
