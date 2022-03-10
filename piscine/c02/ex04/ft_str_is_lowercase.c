/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:14:03 by yu-chang          #+#    #+#             */
/*   Updated: 2022/01/22 23:13:02 by yu-chang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
   	char    *lowercase;
   	char    *nonlowercase;
   	char    *empty;
   	
	lowercase = "abcdefg";
	nonlowercase = "ABCDEFG";
	empty = "";
	printf("lowercase: %d\n", ft_str_is_lowercase(lowercase));
	printf("non-lowercase: %d\n", ft_str_is_lowercase(nonlowercase));
	printf("empty: %d\n", ft_str_is_lowercase(empty));
}
*/
