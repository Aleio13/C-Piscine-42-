/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:42:18 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/16 00:37:13 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "stdio.h"*/
int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (*str != '\0')
	{
		str++;
		lenght++;
	}
	return (lenght);
}

/*int main() {
  char str[] = "12345";
  int len;

  len = ft_strlen(str);
  printf("length: %d\n", len);

  return 0;
}*/