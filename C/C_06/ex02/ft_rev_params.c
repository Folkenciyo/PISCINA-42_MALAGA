/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:14:07 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/30 17:14:09 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		k;
	char	sl;

	i = 0;
	j = 1;
	k = argc - 1;
	sl = '\n';
	while (j < argc)
	{
		while (argv[k - 1][i] != '\0')
		{
			write(1, &argv[k][i], 1);
			i++;
		}
		i = 0;
		write(1, &sl, 1);
		k--;
		j++;
	}
	return (0);
}
