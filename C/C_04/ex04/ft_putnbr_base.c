/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 19:39:19 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/28 19:39:21 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_is_negative(int nbr)
{
	char	minus;

	minus = '-';
	if (nbr < 0)
	{
		write(1, &minus, 1);
		nbr *= -1;
		return (nbr);
	}
	else
	{
		return (nbr);
	}
}

int	control_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (ft_strlen(base) <= 1 && base[i] == '\0')
	{
		return (1);
	}
	while (base[i] != '\0')
	{
		if ((base[i] == '+' || base[i] == '-')
			|| (base[i] < 32 || base[i] > 126))
			return (1);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;

	i = 0;
	if (control_error(base) == 1)
		return ;
	nbr = ft_is_negative(nbr);
	if (nbr >= ft_strlen(base))
	{
		ft_putnbr_base((nbr / ft_strlen(base)), base);
		ft_putnbr_base((nbr % ft_strlen(base)), base);
	}
	else
	{
		while (base[i])
		{
			if (i == nbr)
			{
				write(1, &base[i], 1);
			}
			i++;
		}
	}
}

int main(void)
{
	char base[] = "artyu";
	int nbr = -255;
	ft_putnbr_base(nbr, base);
	return (0);
}
