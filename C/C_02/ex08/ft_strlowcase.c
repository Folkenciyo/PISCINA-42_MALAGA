/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:51:24 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/20 18:51:34 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		if ((str[n] >= 'A' && str[n] <= 'Z'))
		{
			str[n] = str[n] + 32;
		}
		n++;
	}
	str[n] = '\0';
	return (str);
}
