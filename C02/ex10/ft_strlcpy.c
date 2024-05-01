/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 06:48:36 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/17 17:49:37 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "stdio.h"*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	lenght;

	lenght = 0;
	while (*src != '\0')
	{
		dest[lenght] = *src;
		src++;
		lenght++;
	}
	while (lenght < size)
	{
		lenght++;
	}
	return (lenght);
}

/*int	main()
{
	char *src = "gib ihn bra 187";
	char dest[50];
	unsigned int size = 50;
	ft_strlcpy(dest, src, size);
	printf("%s", ft_strlcpy);
	return 0;
}*/