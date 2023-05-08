/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:30:00 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/24 13:30:04 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h> */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while ((str[i] != '\0'))
	{
		while ((str[i + j] != '\0') == (to_find[j] != '\0'))
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char str[] = "zzzz1123z";
	char to_find[] = "11";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s", strstr( str, to_find));
	return (0);
} */
