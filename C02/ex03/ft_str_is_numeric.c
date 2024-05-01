/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 04:23:52 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/17 18:30:44 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_str_is_numeric(char *str)
{
	int	digit;
	int	count;

	count = 0;
	digit = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			digit++;
		}
		str++;
		count++;
	}
	if (digit != count)
	{
		return (0);
	}
	return (1);
}
/*int main()
{
    char *str = "112445555678906";
    printf("string:%s = %d\n", str, ft_str_is_numeric(str));
    return 0;
}*/