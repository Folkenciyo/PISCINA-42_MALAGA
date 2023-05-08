/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 19:42:54 by juguerre          #+#    #+#             */
/*   Updated: 2023/03/28 19:42:57 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <stdlib.h> */

int	ft_is_negative(char *str)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 45)
		{
			counter++;
		}
		i++;
	}
	if ((counter % 2) == 1)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (((((str[i] != ' ') || (str[i] != '\f'))
					|| ((str[i] != '\n') || (str[i] != '\r')))
				|| ((str[i] != '\t') || (str[i] != '\v')))
			&& (str[i] >= 48 && str[i] <= 57))
		{
			j = (j + (str[i] - '0')) * 10;
			if (!(str[i + 1] >= 48 && str[i + 1] <= 57))
			{
				str[i + 1] = '\0';
			}
		}
		i++;
	}
	j = j / 10;
	j = j * ft_is_negative(str);
	return (j);
}

/* int main()
{
	char value[] = "  	--fgghjk---34596asd6";
	int v;

	v = ft_atoi(value);
	printf("%s is %d\n",value,v);
	return(0);
} */
