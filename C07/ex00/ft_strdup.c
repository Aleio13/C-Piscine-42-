/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:01:44 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/30 10:45:13 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		length;

	i = 0;
	length = ft_strlen(src);
	dest = malloc(length + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include "stdio.h"		
// int main()
// {
// 	char	*src = "";
// 	printf ("result: %s", ft_strdup(src));
//  free(src);
// 	return (0);
// }