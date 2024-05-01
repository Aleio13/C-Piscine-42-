/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 21:55:20 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/23 01:19:08 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "stdio.h"*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] -(unsigned char)s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		if (s1[i] == '\0' && s2[i] != '\0')
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

/*int	main()
{
	char	*s1 = "56";
	char	*s2 = "57";
	unsigned int	n = 100;

	printf ("result: %i", ft_strncmp(s1, s2, n));
	return (0);
}*/