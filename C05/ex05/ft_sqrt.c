/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 05:42:45 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/28 14:40:41 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "stdio.h"
int	ft_sqrt(int nb)
{
	unsigned int	nbr;
	unsigned int	nbr1;

	nbr = 0;
	nbr1 = nb;
	if (nb < 0)
	{
		return (0);
	}
	while (nbr * nbr <= nbr1)
	{
		if (nbr * nbr == nbr1)
		{
			return (nbr);
		}
		nbr++;
	}
	return (0);
}

// int	main()
// {
// 	int i = -2;
// 	while (i <= 10000)
// 	{
// 		printf("result %i: %i\n", i, ft_sqrt(i));
// 		i++;
// 	}
// 	return (0);
// }

  