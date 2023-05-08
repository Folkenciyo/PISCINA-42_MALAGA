/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:53:43 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/15 12:40:05 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	int	neg;
	int	pos;

	neg = 78;
	pos = 80;
	if (n < 0)
	{
		ft_putchar(neg);
	}
	else
	{
		ft_putchar(pos);
	}
}
