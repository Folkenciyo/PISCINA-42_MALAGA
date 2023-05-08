/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:57:27 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/19 12:57:40 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	ft_insert_num(int *array);
void	ft_string_to_array(char *string);

void	ft_draw_file(int *array)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{	
		j = 0;
		while (j < 4)
		{
			ft_putchar(array[i * 4 + j] + '0');
			j++;
		}
		i++;
	}
}

void	ft_draw_grid( char *string )
{
	int	board[4][4];

	ft_insert_num((int *)board);
	ft_draw_file((int *)board);
	ft_string_to_array(string);
}
