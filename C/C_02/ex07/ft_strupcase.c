/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:50:59 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/20 18:51:04 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		if ((str[n] >= 'a' && str[n] <= 'z'))
		{
			str[n] = str[n] - 32;
		}
		n++;
	}
	str[n] = '\0';
	return (str);
}
