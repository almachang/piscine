/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:11:25 by yu-chang          #+#    #+#             */
/*   Updated: 2022/01/18 13:38:45 by yu-chang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_num(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = '0';
	while (num1 <= '7')
	{
		num2 = num1 + 1;
		while (num2 <= '8')
		{
			num3 = num2 + 1;
			while (num3  <= '9')
			{ 
				//write(1, &num1, 1);
				//write(1, &num2, 1);
				//write(1, &num3, 1);
				ft_num(num1, num2, num3);
				num3++;
			}
		num2++;
		}
	num1++;
	}
}



int	main(void)
{
	ft_print_comb();
}
