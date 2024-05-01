/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:50:00 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/19 00:17:46 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "stdio.h"*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
    int div_result; 
    int mod_result;
    
    int a = 8;
    int b = 4;  
    
    int *div = &div_result;
    int *mod = &mod_result;
    
    ft_div_mod(a, b, div, mod);
    
    printf("div = %i\n", *div);
    printf("mod = %i\n", *mod);
    
    return 0;
}*/