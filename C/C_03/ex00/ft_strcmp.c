/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:28:34 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/24 13:28:38 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h> */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	counter;

	i = 0;
	counter = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
		{
			counter++;
		}
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

/* int	main(void)
{
	char s1[]="qdetr";
	char s2[]="qdjerty";
	printf("%d\n",ft_strcmp(s1, s2));
	printf("%d", strcmp(s1, s2));
	return(0);
} */
