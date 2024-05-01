/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 20:21:40 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/16 00:36:43 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "stdio.h"*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;
	int	tmp2;

	tmp = *a / *b;
	tmp2 = *a % *b;
	*a = tmp;
	*b = tmp2;
}

/*int main()
{
    int a = 8;
    int b = 5;

    int *ptr_a = &a;
    int *ptr_b = &b;

    ft_ultimate_div_mod(ptr_a, ptr_b);

    printf("After division: a = %d, Afte mod b = %d\n", a, b);

    return 0;
}*/