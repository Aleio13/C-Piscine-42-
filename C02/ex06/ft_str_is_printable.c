/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 04:45:15 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/17 20:12:02 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "stdio.h"*/
int	ft_str_is_printable(char *str)
{
	int	character;
	int	count;

	count = 0;
	character = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str >= ' ' && *str <= 127)
		{
			character++;
		}
		str++;
		count++;
	}
	if (character == count)
	{
		return (1);
	}
	return (0);
}
/*int main()
{
    char *str = "print";
    printf("result:%s = %d\n", str, ft_str_is_printable(str));
    return 0;
}*/