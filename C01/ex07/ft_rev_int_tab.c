/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:46:27 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/16 00:27:24 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "stdio.h"*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	tmp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		tmp = tab[start];
		tab[start] = tab[end];
		tab[end] = tmp;
		start++;
		end--;
	}
}

/*int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	int	size =  5 ;

	ft_rev_int_tab(arr, size);

	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}*/
