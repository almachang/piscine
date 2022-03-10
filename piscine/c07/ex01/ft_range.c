/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 22:54:21 by yu-chang          #+#    #+#             */
/*   Updated: 2022/02/01 17:23:49 by yu-chang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	p = (int *) malloc(sizeof(int) * (max - min));
	if (p == NULL)
	{
		return (0);
	}
	i = 0;
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
/*
int	main(void)
{
	int *num = ft_range(1, 10);
	int i;
	while ( num[i] != '\0')
	{
		printf("%d, ", num[i]);
	   	i++;
	}
	printf("\n");	
}
*/
