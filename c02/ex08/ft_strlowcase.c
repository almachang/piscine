/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 14:21:54 by yu-chang          #+#    #+#             */
/*   Updated: 2022/01/23 14:23:44 by yu-chang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] +32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{
	char upr[] = "ABC";
	char *p_upr = upr;

	char mix[] = "ABCaabc";
	char *p_mix = mix;

	printf("uppercase string: %s\n", ft_strlowcase(p_upr));
	printf("mixcase string: %s\n", ft_strlowcase(p_mix));
}
*/
