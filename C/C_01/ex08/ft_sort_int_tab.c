/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:05:08 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/18 20:11:00 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	temporal;

	z =1;
	x = 0;
	while (x < size)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] >= tab[x])
			{	
				temporal = tab[x];
				tab[x] = tab[i];
				tab[i] = temporal;
			}
			i++;
		}
		x++;
	}
}
