/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:49:17 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/30 00:02:01 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	calc_length(int size, char **strs, char *sep)
{
	int	length;
	int	length2;
	int	total_length;
	int	n;

	n = 0;
	length2 = 0;
	total_length = 0;
	while (sep[length2] != '\0')
		length2++;
	while (n < size)
	{
		length = 0;
		while (strs[n][length] != '\0')
			length++;
		total_length += length;
		if (n < size - 1)
			total_length += length2;
		n++;
	}
	return (total_length);
}

char	*big_loop(int size, char **strs, char *sep, char *str)
{
	int		n;
	int		j;
	int		i;

	n = 0;
	j = 0;
	while (n < size)
	{
		i = 0;
		while (strs[n][i] != '\0')
			str[j++] = strs[n][i++];
		if (n < size - 1)
		{
			i = 0;
			while (sep[i] != '\0')
				str[j++] = sep[i++];
		}
		n++;
	}
	str[j] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	char	*str;

	if (size <= 0)
	{
		str = malloc(1);
		if (str != NULL)
			str[0] = '\0';
		return (str);
	}
	length = calc_length(size, strs, sep);
	str = malloc (length + 1);
	if (str == NULL)
		return (NULL);
	return (big_loop(size, strs, sep, str));
}

// #include "stdio.h"
// #include "stdlib.h"
// int main() 
// {
//     char *strs[] = {"Stelio", "L", "Ratio", "Noob"};
//     char *sep = "--";
//     int size = 4;
//     char *result = ft_strjoin(size, strs, sep);
//     if (result != NULL) {
//         printf("Joined string: %s\n", result);
//         free(result);
//     } else {
//         printf("Memory allocation failed.\n");
//     }
//     return 0;
// }