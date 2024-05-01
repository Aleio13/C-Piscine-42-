/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 03:21:08 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/25 13:51:38 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "stdio.h"*/
int	ft_iterative_power(int nb, int power)
{
	int	storage;

	storage = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (power != 1)
	{
		storage *= nb;
		power--;
	}
	return (storage);
}

/*int	main()
{
	printf("result: %i", ft_iterative_power(10, 5));
	return (0);
}*/