/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 22:58:58 by yu-chang          #+#    #+#             */
/*   Updated: 2022/01/26 14:09:51 by yu-chang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	pn;
	int	i;
	int	result;

	pn = 1;
	i = 0;
	result = 0;
	while (str[i] < 33)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			pn = pn * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * pn);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("    ---+--+1234ab567"));
}
*/
