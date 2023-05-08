/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:28:52 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/24 13:28:55 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h> */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	counter;

	i = 0;
	counter = 0;
	while ((s1[i] != '\0') && (i < n))
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
	if (counter == n)
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
	char s1[]="qdeertyO";
	char s2[]="qdeertyL";
	unsigned int n = 7;
	printf("%d\n",ft_strncmp(s1, s2, n));
	printf("%d", strncmp(s1, s2, n));
	return(0);
} */
