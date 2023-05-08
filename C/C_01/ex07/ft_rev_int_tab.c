/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:07:13 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/17 12:45:22 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temporal;

	i = 0;
	while (i <= size)
	{
		if (tab[i] < size)
		{	
			temporal = tab[size];
			tab[size] = tab[i];
			tab[i] = temporal;
		}
		size--;
		i++;
	}
	i++;
}

int main(void)
{
	int array[5] = {1,2,3,4,5};
	int size = 4;
	ft_rev_int_tab(array, size);
	printf("%d%d%d%d%d", array[0],array[1],array[2],array[3],array[4]);
	return 0;
}