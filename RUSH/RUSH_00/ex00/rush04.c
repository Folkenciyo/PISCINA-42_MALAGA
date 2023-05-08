/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 12:32:57 by regea-go          #+#    #+#             */
/*   Updated: 2023/03/12 21:41:03 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void	ft_draw_rectangle(int width, int x, int heigth, int y)
{
	if (width == 1 && heigth == 1)
	{
		ft_putchar('A');
	}
	else if ((width == 1 && heigth == y) || (width == x && heigth == 1))
	{
		ft_putchar('C');
	}
	else if (width == x && heigth == y)
	{
		ft_putchar('A');
	}
	else if ((width == 1 || width == x) || (heigth == 1 || heigth == y))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	width;
	int	heigth;

	heigth = 1;
	while (heigth <= y)
	{
		width = 1;
		while (width <= x)
		{
			ft_draw_rectangle(width, x, heigth, y);
			width++;
		}
		write(1, "\n", 1);
		heigth++;
	}
}
