/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 22:12:01 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/13 17:21:20 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_write_sequence(int i, int j)
{
	while (j <= 99)
	{
		ft_putchar(i / 10 + '0' );
		ft_putchar(i % 10 + '0' );
		ft_putchar(' ' );
		ft_putchar(j / 10 + '0' );
		ft_putchar(j % 10 + '0' );
		if (i != 98 || j != 99)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		j++;
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 100)
	{	
		j = i + 1;
		ft_write_sequence(i, j);
		i++;
	}	
}
