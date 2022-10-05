/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:15:04 by tdelgran          #+#    #+#             */
/*   Updated: 2022/10/03 17:03:46 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	b;

	b = 0;
	a = (int *)malloc(sizeof(int) * (max - min));
	if (!a)
		return (0);
	while (b < max - min)
	{
		a[b] = min + b;
		b++;
	}
	return (a);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;

	if (min >= max)
		return (0);
	tab = ft_range(min, max);
	if (tab == 0)
		return (-1);
	*range = tab;
	return (max - min);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	range;
	int	*tab;

	i = 0;
	if (argc == 3)
	{
		range = ft_ultimate_range(&tab, atoi(argv[1]), atoi(argv[2]));
		while (i < range)
		{
			printf("%i, ", tab[i]);
			i++;
		}
	}
	free(tab);
	return (0);
}*/
