/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:58:02 by yu-chang          #+#    #+#             */
/*   Updated: 2022/01/20 14:39:11 by yu-chang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	x;
	int	*p;

	x = 1;
	p = &x;
	printf("before: %d\n", x);
	ft_ft(p);
	printf("after: %d\n", x);
}