/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:52:01 by yu-chang          #+#    #+#             */
/*   Updated: 2022/01/23 14:21:15 by yu-chang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] -32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{
	char lwr[] = "abcd";
	char *p_lwr = lwr;

	char mix[] = "ABCabc";
	char *p_mix = mix;

	printf("lowercase string: %s\n", ft_strupcase(p_lwr));
	printf("mixcase string: %s\n", ft_strupcase(p_mix));
}
*/
