#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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

	char	yes[] = "tESTO";
	char	no[] = "teSto";
	char	zero[] = "t";

	one = ft_str_is_uppercase(yes);
	two = ft_str_is_uppercase(no);
	three = ft_str_is_uppercase(zero);

	printf("%d\n", one);
	printf("%d\n", two);
	printf("%d\n", three);
	return 0;
}
		
