/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 05:04:46 by almatsch          #+#    #+#             */
/*   Updated: 2024/04/25 10:20:23 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "stdio.h"
int	ft_fibonacci(int index)
{
	int	fibo;

	fibo = 0;
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 1)
	{
		return (1);
	}
	else if (index > 0)
	{
		fibo = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	return (fibo);
}

// int	main()
// {
// 	printf("result: %i", ft_fibonacci(4));
// 	return 0;
// }
