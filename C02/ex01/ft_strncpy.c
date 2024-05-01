/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:46:33 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/17 21:25:07 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "stdio.h"*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i != n && *src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	while (i != n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*int	main()
{
	char *src = "w4s 1st m1t d1r br4";
	char dest[100];
	unsigned int n = 15;

	ft_strncpy(dest, src, n);
	printf("result: %s", dest);
	return 0;
}*/