/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:14:42 by tdelgran          #+#    #+#             */
/*   Updated: 2022/09/29 15:00:30 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	a;

	a = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		a = nb * a;
		power--;
	}
	return (a);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(5, 2));
}*/
