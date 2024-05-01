/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 23:13:28 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/22 22:54:23 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "stdio.h"
#include "string.h"*/
char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;
	int		i;

	ptr = str;
	i = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*ptr != '\0')
	{
		i = 0;
		while (*(ptr + i) == to_find[i] && to_find[i] != '\0')
		{
			i++;
		}
		if (to_find[i] == '\0')
		{
			return (ptr);
		}
		ptr++;
	}
	return (0);
}

/*int	main(void)
{
	char str1[] = "Yoshi better then Kirby!";
	char str2[] = "Kirby";

	printf("Test 1: %s\n", ft_strstr(str1, str2));
	printf("Test 2: %s\n", strstr(str1, str2));
	return (0);
}*/