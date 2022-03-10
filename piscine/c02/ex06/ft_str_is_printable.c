/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:16:43 by yu-chang          #+#    #+#             */
/*   Updated: 2022/01/23 14:18:36 by yu-chang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	char	*printablechar;
	char 	*nonprintablechar;
	char	*empty;

	printablechar = "$%^&@";
	nonprintablechar ="	2";
	empty = "";

	printf("printable: %d\n", ft_str_is_printable(printablechar));
	printf("non-printable: %d\n", ft_str_is_printable(nonprintablechar));
	printf("empty: %d\n", ft_str_is_printable(empty));
}
*/
