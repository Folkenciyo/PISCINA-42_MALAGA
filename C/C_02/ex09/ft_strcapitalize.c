/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:51:50 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/20 18:51:54 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_all_min(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((str[i] >= 65) && (str[i] <= 90)))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_all_min(str);
	if ((str[i] == str[0])
		&& (((str[i] >= 97) && (str[i] <= 122))))
	{
		str[i] = str[i] - 32;
	}
	while (str[i])
	{
		if (((((str[i] >= 32) && (str[i] <= 47))
					|| ((str[i] >= 58) && (str[i] <= 64)))
				|| (((str[i] >= 91) && (str[i] <= 96))
					|| ((str[i] >= 123) && (str[i] <= 126))))
			&& (((str[i + 1] >= 97) && (str[i + 1] <= 122))))
		{
			str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
