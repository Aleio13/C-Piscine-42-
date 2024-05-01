/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:47:30 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/29 16:47:50 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	arr_size(int min, int max)
{
	int	size;

	size = 0;
	while (min < max)
	{
		size++;
		min++;
	}
	return (size);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*arr;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = arr_size(min, max);
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (-1);
	while (i < size)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (size);
}

// #include "stdio.h"
// int main()
// {
//     int *range = NULL;
//     int min = 5;
//     int max = 5;
//     int i;
//     int size;

//     size = ft_ultimate_range(&range, min, max);
//     if (size == -1)
//     {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     else if (size == 0)
//     {
//         printf("No range to print (min is not less than max)\n");
//     }
//     else
//     {
//         printf("Size of range: %d\n", size);
//         for (i = 0; i < size; i++)
//         {
//             printf("%d ", range[i]);
//         }
//         printf("\n");
//     }

//     // Free the allocated memory
//     free(range);

//     return 0;
// }