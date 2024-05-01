/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 09:32:06 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/28 12:33:43 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "stdio.h"*/
int	ft_is_prime(int nb)
{
	int	nbr;

	nbr = 2;
	if (nb == 1 || nb <= 0)
	{
		return (0);
	}
	else if (nb == 2)
	{
		return (1);
	}
	while (nbr < nb)
	{
		if (nb % nbr == 0)
		{
			return (0);
		}
		nbr++;
	}
	return (1);
}

/* int	main()
{
	printf("result: %i", ft_is_prime(3));
	return (0);
} */