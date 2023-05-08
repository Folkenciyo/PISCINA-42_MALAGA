/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:56:09 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/20 18:56:12 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_deci_to_hexa(int deci)
{
	char	*uni_hex;
	int		i;

	uni_hex = "0123456789abcdef";
	i = 0;
	if (deci >= 16)
	{
		ft_deci_to_hexa(deci / 16);
		ft_deci_to_hexa(deci % 16);
	}
	else
	{
		while (uni_hex[i])
		{
			if (i == deci)
			{
				ft_putchar(uni_hex[i]);
			}
			i++;
		}
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((str[i] >= 0) && (str[i] < 32)) || (str[i] == 127))
		{
			ft_putchar(92);
			if (str[i] < 16)
			{
				ft_putchar('0');
			}
			ft_deci_to_hexa(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
