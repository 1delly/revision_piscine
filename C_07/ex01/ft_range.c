/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:37:39 by tdelgran          #+#    #+#             */
/*   Updated: 2022/10/04 11:48:02 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	b;

	b = 0;
	if (min >= max)
		return (0);
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

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	int	i;
	int	range;
	int	*tab;

	i = 0;
	range = atoi(argv[2]) - atoi(argv[1]);
	if (argc == 3)
	{
		tab = ft_range(atoi(argv[1]), atoi(argv[2]));
		while (i < range)
		{
			printf("%i, ", tab[i]);
			i++;
		}
	}
	free(tab);
	return (0);
}*/
