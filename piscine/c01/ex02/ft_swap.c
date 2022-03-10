/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:05:29 by yu-chang          #+#    #+#             */
/*   Updated: 2022/01/20 18:42:20 by yu-chang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}

int main()
{
	int x= 4;
	int y = 2;
	printf("before: a and b are %d and %d\n", x, y);
	ft_swap(&x, &y);
	printf("after: a and b are %d and %d\n", x, y);
}	
