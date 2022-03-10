/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:50:42 by yu-chang          #+#    #+#             */
/*   Updated: 2022/01/22 23:12:33 by yu-chang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
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
	char *alpha;
	char *nonalpha;
	char *empty; 
	
	alpha = "abcdefg";
	nonalpha = "123456";
	empty = "";

	printf("alphabet: %d\n", ft_str_is_alpha(alpha));
	printf("nonphabet: %d\n", ft_str_is_alpha(nonalpha)); 
	printf("empty: %d\n", ft_str_is_alpha(empty));
}
*/
