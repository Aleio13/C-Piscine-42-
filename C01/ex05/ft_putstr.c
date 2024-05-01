/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 23:32:05 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/16 02:07:25 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
/*#include "stdio.h*/
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}

/*int main()
{
	char str[] = "Piwko\n";
	ft_putstr(str);

}*/
