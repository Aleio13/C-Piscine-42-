/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:03:44 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/28 13:29:51 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	i = 0;
	n = argc;
	while (argv[0][i] != '\0')
	{
		write (1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
