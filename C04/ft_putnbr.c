#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	num;
	char	n;

	num = nb;
	if (nb < 0)
	{
		num *= -1;
		write(1, "-", 1);
	}

	if (num > 10)
		{
			ft_putnbr(num / 10);
		}
	num = num % 10;
	n = num + '0';
	write(1, &n, 1);
}

int	main(void)
{
	ft_putnbr(-2147483648);
	return 0;
}
