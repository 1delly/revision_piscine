/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:32:40 by tdelgran          #+#    #+#             */
/*   Updated: 2022/10/04 19:22:03 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (dest[i])
		i++;
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}

char	sizemec(int size, char **strs, char *sep)
{
	char	res;
	int		i;

	res = 0;
	i = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		res = res + (ft_strlen(strs[i++]));
	}
	res = res + ((ft_strlen(sep)) * (size - 1));
	return (res + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(sizeof(char) * (sizemec(size, strs, sep)));
	if (res == 0)
		return (0);
	if (size == 0)
		return (res);
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i != size - 1)
			ft_strcat(res, sep);
		i++;
	}
	res [ft_strlen(res)] = '\0';
	return (res);
}

/*#include <stdio.h>

int	main(int ac, char **av)
{
	(void) ac;
	printf("%s", ft_strjoin(ac, av, "go"));
}*/
