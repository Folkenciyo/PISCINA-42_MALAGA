/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:56:35 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/19 12:56:38 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_insert_num(int *array)
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
			array[i * 4 + j] = j;
			j++;
		}
		i++;
	}
}