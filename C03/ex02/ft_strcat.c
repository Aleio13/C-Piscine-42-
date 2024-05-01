/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 22:22:03 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/22 21:16:52 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "stdio.h"*/
char	*ft_strcat(char *dest, char *src)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = src;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (*ptr != '\0')
	{
		dest[i] = *ptr;
		ptr++;
		i++;
	}
	dest[i] = '\0';
	*ptr = '\0';
	return (dest);
}

/*int	main()
{
	char	src[] = " Panas Glatze";
	char	dest[] = "Stelio leckt";

	printf("String: %s\n", ft_strcat(dest, src));
	return (0);
}*/