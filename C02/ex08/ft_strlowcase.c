/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 05:21:17 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/18 18:03:33 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr += 32;
		}
		ptr++;
	}
	*ptr = '\0';
	return (str);
}

int main()
{
	char str[] = "WENN DEINE CHAYA CLUBBESITZER KENNT, DANN IST SIE EINE THOT !";
	ft_strlowcase(str);
	printf("Result:%s ", str);
    return 0;
}