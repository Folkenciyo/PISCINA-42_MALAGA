/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_to_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:00:11 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/19 13:00:16 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_string_to_array(char *string)
{
	int	i;
	int	j;
	int	arr[16];

	j = 0;
	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] != ' ')
		{	
			arr[j] = string[i] - '0';
			j++;
		}
		i++;
	}
}
