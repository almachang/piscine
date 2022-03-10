/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 20:53:08 by yu-chang          #+#    #+#             */
/*   Updated: 2022/01/22 23:12:54 by yu-chang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main() 
{
	char	*num;
	char	*nonnum;
	char	*empty;

	num = "123456";
	nonnum = "abcdefg";
	empty = "";

	printf("number: %d\n", ft_str_is_numeric(num));
	printf("non-number: %d\n", ft_str_is_numeric(nonnum));
	printf("empty: %d\n", ft_str_is_numeric(empty));
}
*/
