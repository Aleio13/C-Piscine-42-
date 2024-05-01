/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 05:30:11 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/17 17:50:43 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "stdio.h"*/
char	*ft_strcapitalize(char *str)
{
	if (*str >= 'a' && *str <= 'z')
	{
		*str -= 32;
	}
	while (*str != '\0')
	{
		if (*str >= ' ' && *str <= 47)
		{
			str++;
			if (*str >= 'a' && *str <= 'z')
			{
				*str -= 32;
			}
		}
		str++;
	}
	return (str);
}

/*int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("Result:%s ", str);
    return 0;
}*/