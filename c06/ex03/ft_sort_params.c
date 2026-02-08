#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	char tmp;

	i = 1;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				tmp = *av[i];
				av[i] = av[j];
				*av[j] = tmp;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
