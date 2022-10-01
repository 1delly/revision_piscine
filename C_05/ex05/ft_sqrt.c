/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:46:49 by tdelgran          #+#    #+#             */
/*   Updated: 2022/09/29 17:10:01 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;

	a = 0;
	while (a < nb)
	{
		if (a * a == nb)
			return (a);
		a++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(64));
}*/