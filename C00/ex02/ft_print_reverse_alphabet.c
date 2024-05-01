/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:24:58 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/12 00:33:00 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_print_reverse_alphabet(void)
{
	char	a;
	char	z;

	z = 'z';
	a = 'a';
	while (z != a - 1)
	{
		write (1, &z, 1);
		z--;
	}
}
