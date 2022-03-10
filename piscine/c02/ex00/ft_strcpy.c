/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 14:45:08 by yu-chang          #+#    #+#             */
/*   Updated: 2022/01/22 23:11:52 by yu-chang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{	
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src [index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
/*
int main(void)
{
	char src[] = "hello" ;
	char dest[] ="";

	printf("source: %s\n", src);
	printf("old destination: %s\n", dest);	
	
	ft_strcpy(dest, src);
	printf("new destination: %s\n", dest);
}
*/
