#include<unistd.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main (int ac, char **av)
{
	int  i;
	if (ac == 2)
	{
		i = ft_strlen(&av[1][i]);
		while (i >= 0)
		{
			write(1, &av[1][i], 1);
			i--;
		}
		write(1, "\n", 1);
		return(0);
	}
	write(1, "\n", 1);
}
