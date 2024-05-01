/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 02:24:33 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/21 22:04:08 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
int	main()
{
	char *src = "gib ihn bra";
	char dest[100];

	ft_strcpy(dest, src);
	
	printf("result: %s", dest);
	return 0;
}