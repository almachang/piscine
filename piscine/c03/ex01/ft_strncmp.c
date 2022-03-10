/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
a/*   Created: 2022/01/25 14:01:08 by yu-chang          #+#    #+#             */
/*   Updated: 2022/01/25 19:57:53 by yu-chang         ###   ########.fr       */
/ZZ*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			i++;
		}
	}
	return (0);
}
/*
int main()
{
	char *s1 = "abcd";
	char *s2 = "abcdefg";
	printf("%d\n", ft_strncmp(s1, s2, 8));
}
*/
