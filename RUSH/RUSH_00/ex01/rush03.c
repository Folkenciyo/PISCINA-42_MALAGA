/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 12:32:57 by regea-go          #+#    #+#             */
/*   Updated: 2023/03/12 12:02:13 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putchar.c"

void	ft_draw_rectangle(int width, int x, int height, int y)
{
	if ((width == 1 && height == 1) || (width == 1 && height == y))
	{
		ft_putchar('A');
	}
	else if ((height == 1 && width == x) || (height == y && width == x))
	{
		ft_putchar('C');
	}
	else if ((width == 1 || width == x) || (height == 1 || height == y))
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
	int	height;

	height = 1;
	while (height <= y)
	{
		width = 1;
		while (width <= x)
		{
			ft_draw_rectangle(width, x, height, y);
			width++;
		}
		write(1, "\n", 1);
		height++;
	}
}
