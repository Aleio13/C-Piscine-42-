/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:16:26 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/16 00:22:12 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "stdio.h"*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	digit;
	int	second_digit;
	int	tmp;

	digit = 0;
	while (digit < size - 1)
	{
		second_digit = digit + 1;
		while (second_digit <= size - 1)
		{
			if (tab[digit] >= tab[second_digit])
			{
				tmp = tab[digit];
				tab[digit] = tab[second_digit];
				tab[second_digit] = tmp;
			}
			second_digit++;
		}
		digit++;
	}
}

/*int	main(void)
{
	int	tab[] = {5, 2, 9, 1, 5, 6};
	int	size = 6;
	int	i;

	ft_sort_int_tab(tab, size);

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/