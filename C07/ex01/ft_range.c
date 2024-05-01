/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:45:20 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/30 08:08:35 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	arr_length(int min, int max)
{
	int	length;

	length = 0;
	while (min < max)
	{
		length++;
		min++;
	}
	return (length);
}

int	*ft_range(int min, int max)
{
	int	*arr;
	int	length;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	length = arr_length(min, max);
	arr = malloc(length * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < length)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

// #include "stdio.h"
// int main()
// {
// 	int min = 5;
// 	int max = 5;
// 	int i = 0;
// 	int *arr;

// 	arr = ft_range(min, max);
// 	while (i++, min < max - 1)
// 	{
// 		printf("%i\n", arr[i]);
// 		min++;
// 	}
// 	free(arr);
// 	return (0);
// }