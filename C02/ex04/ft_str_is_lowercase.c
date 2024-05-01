/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 04:34:18 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/17 18:29:57 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_str_is_lowercase(char *str)
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
		if (*str >= 'a' && *str <= 'z')
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
    char *str = "abcdefghijdgklj";
    printf("string:%s = %d\n", str, ft_str_is_lowercase(str));
    return 0;
}*/
