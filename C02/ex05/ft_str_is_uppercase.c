/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 04:37:50 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/17 18:28:34 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "stdio.h"*/
int	ft_str_is_uppercase(char *str)
{
	int	letter;
	int	count;

	count = 0;
	letter = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			letter++;
		}
		str++;
		count++;
	}
	if (letter != count)
	{
		return (0);
	}
	return (1);
}
/*int main()
{
    char *str = "abb";
    printf("string:%s = %d\n", str, ft_str_is_uppercase(str));
    return 0;
}*/