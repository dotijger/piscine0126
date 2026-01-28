#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 33 && str[i] <= 126))
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

	char	yes[] = "tESTO!!!";
	char	no[0] = 12;
	char	zero[] = "";

	one = ft_str_is_printable(yes);
	two = ft_str_is_printable(no);
	three = ft_str_is_printable(zero);

	printf("%d\n", one);
	printf("%d\n", two);
	printf("%d\n", three);
	return 0;
}
		
