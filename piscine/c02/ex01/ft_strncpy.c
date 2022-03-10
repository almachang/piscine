/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:57:41 by yu-chang          #+#    #+#             */
/*   Updated: 2022/01/23 13:53:17 by yu-chang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}	
/*
int main(void)
{
	char src[] = "hello world";
	char dest[100] = "";


	printf("source: %s\n", src);
	printf("old destination: %s\n", dest);
	ft_strncpy(dest, src, 9);
	printf("new destination: %s\n", dest);
}
*/
