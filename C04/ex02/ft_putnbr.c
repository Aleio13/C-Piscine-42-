/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 23:37:35 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/24 14:06:32 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_rev_int_tab(char *tab, int size)
{
	int	start;
	int	end;
	int	tmp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		tmp = tab[start];
		tab[start] = tab[end];
		tab[end] = tmp;
		start++;
		end--;
	}
}

void	check_cases(int *nb)
{
	if (*nb < 0 && *nb != -2147483648)
	{
		write (1, "-", 1);
		*nb = *nb * -1;
	}
	else if (*nb == 0)
	{
		write (1, "0", 1);
	}
	else if (*nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	char	nbr[12];

	i = 0;
	check_cases(&nb);
	while (nb > 0)
	{
		nbr[i] = (nb % 10) + 48;
		nb = nb / 10;
		i++;
	}
	nbr[i] = '\0';
	ft_rev_int_tab(nbr, i);
	i = 0;
	while (nbr[i] != '\0')
	{
		write(1, &nbr[i], 1);
		i++;
	}
}
/*int	main(void)
{
	int	piwka = 2147483647;
	ft_putnbr(piwka);
	return 0;
}*/