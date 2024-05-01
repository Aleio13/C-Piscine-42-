/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 23:45:43 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/25 11:54:35 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "stdio.h"*/

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + str[i] - 48;
		i++;
	}
	return (sign * nbr);
}

/*int	main(void)
{
	printf("%i\n", ft_atoi(""));
	printf("%i\n", ft_atoi("-----123aa2323"));	
	printf("%i\n", ft_atoi("-2147483647s234ab567")); \t \r \
	return (0);
}*/
