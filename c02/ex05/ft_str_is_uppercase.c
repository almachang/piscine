/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:20:50 by yu-chang          #+#    #+#             */
/*   Updated: 2022/01/22 23:13:16 by yu-chang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	char	*uppercase;
	char	*nonuppercase;
	char	*empty;

	uppercase = "ABC";
	nonuppercase = "abc";
	empty = "";

	printf("uppercase: %d\n", ft_str_is_uppercase(uppercase));
	printf("non-uppercase: %d\n", ft_str_is_uppercase(nonuppercase));
	printf("empty: %d\n", ft_str_is_uppercase(empty));
}
*/
