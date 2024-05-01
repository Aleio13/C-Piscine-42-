/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 03:01:28 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/17 21:25:53 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_str_is_alpha(char *str)
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
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
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
    char *str = "piwa";
    printf("string:%s = %d\n", str, ft_str_is_alpha(str));
    return 0;
}*/