/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 01:59:46 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/23 01:09:00 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "stdio.h"
#include "string.h"*/
void	length(char *dest, char *src, unsigned int *i, unsigned int *j)
{
	while (dest[*i] != '\0')
	{
		(*i)++;
	}
	while (src[*j] != '\0')
	{
		(*j)++;
	}
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		l;

	j = 0;
	i = 0;
	l = 0;
	length(dest, src, &i, &j);
	if (size <= i)
	{
		return (i + j);
	}
	else if (size > i)
	{
		while (src[l] != '\0' && l + i < size - 1)
		{
			dest[i + l] = src[l];
			l++;
		}
		dest[i + l] = '\0';
	}
	return (i + j);
}

/*int main()
{
    char dest[200] = "Lil bro ";
    char src[] = "got the D R I P";
    unsigned int size = 25;

    printf("Before ft_strlcat: \"%s\"\n", dest);
    unsigned int total = ft_strlcat(dest, src, size);
    printf("After ft_strlcat: \"%s\"\n", dest);
    printf("Total length: %u\n", total);

    return 0;
}*/