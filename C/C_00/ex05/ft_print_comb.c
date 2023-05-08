/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:13:52 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/15 08:54:14 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_num_writer(int a, int b, int c)
{
	while (c <= '9')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (a != '7' || b != '8' || c != '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		c++;
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			ft_num_writer(a, b, c);
			b++;
		}
		a++;
	}
}
