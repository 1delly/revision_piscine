/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:08:29 by tdelgran          #+#    #+#             */
/*   Updated: 2022/09/29 11:58:24 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		a = a * nb;
		nb = nb - 1;
	}
	return (a);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(6));
}*/
