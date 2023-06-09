/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:45:41 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/20 18:45:44 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	n;

	n = 0;
	while ((str[n] >= 'a' && str[n] <= 'z'))
	{
		n++;
	}
	if (str[n] == '\0')
	{	
		return (1);
	}
	else
	{
		return (0);
	}
}
