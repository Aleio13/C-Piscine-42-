/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 22:58:22 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/22 21:10:15 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "stdio.h"*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int					i;
	unsigned int		count;
	char				*ptr;

	i = 0;
	count = 0;
	ptr = src;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (*ptr != '\0' && count < nb)
	{
		dest[i] = *ptr;
		ptr++;
		i++;
		count++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main()
{
	char	src[] = " Tupac";
	char	dest[] = "Lil Mabu better";

	printf("String: %s\n", ft_strncat(dest, src, 10));
	return (0);
}*/