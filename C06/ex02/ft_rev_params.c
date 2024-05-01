/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:10:21 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/26 09:20:53 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	i = 0;
	n = argc - 1;
	while (n > 0)
	{
		while (argv[n][i] != '\0')
		{
			write (1, &argv[n][i], 1);
			i++;
		}
		i = 0;
		n--;
		write (1, "\n", 1);
	}
	return (0);
}
