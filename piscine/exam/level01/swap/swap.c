#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
}

int main()
{
	int x = 42;
	int y = 24;

	printf("old: a = %d and b = %d\n", x, y);
	ft_swap(&x, &y);
	printf("new: a = %d and b = %d\n", x, y);
}

