/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:46:02 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/20 19:16:19 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	n;

	n = 0;
	while ((str[n] >= 'A' && str[n] <= 'Z'))
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