/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:30:32 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/24 13:30:37 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h> */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (i <= nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	u;
	char			*buffer_2;

	i = 0;
	j = 0;
	u = 0;
	ft_strcpy(buffer_2, dest);
	ft_strncat(dest, src, size);
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	while (buffer_2[u] != '\0')
	{
		if (u == size)
			return (size);
		u++;
	}
	return (i + j);
}

/* int	main(void)
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 16;
    char buffer[size];

	strcpy(buffer, first);
    r = strlcat(buffer, last, size);
	ft_strlcat(first, last, size);
	printf(" MY value returned: %d\n", ft_strlcat(first, last, size));
    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");
    return(0);
} */
