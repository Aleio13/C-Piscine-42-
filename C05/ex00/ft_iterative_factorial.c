/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 23:53:37 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/25 10:12:22 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "stdio.h"*/

int	ft_iterative_factorial(int nb);

int	check_cases(int nb)
{
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	return (ft_iterative_factorial(nb));
}

int	ft_iterative_factorial(int nb)
{
	int	nbr;
	int	fact;
	int	count;

	nbr = nb - 1;
	count = 0;
	fact = nbr * nb;
	if (nb < 0 || nb == 0 || nb == 1)
	{
		return (check_cases(nb));
	}
	while (nb > 1)
	{
		nbr = nb - 1;
		if (count != 0)
		{
			fact = fact * nbr;
		}
		nb--;
		count++;
	}
	return (fact);
}

/*int	main(void)
{
	printf("result: %i", ft_iterative_factorial(12));
	return (0);
}*/