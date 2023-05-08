/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:42:53 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/20 18:42:59 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{	
	unsigned int	u;

	u = 0;
	while (src[n] != '\0' && u < n)
	{
		dest[u] = src[u];
		u++;
	}
	dest[u] = '\0';
	while (u < n)
	{
		dest[u] = '\0';
		u++;
	}
	return (dest);
}
