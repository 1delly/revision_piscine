/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:58:06 by tdelgran          #+#    #+#             */
/*   Updated: 2022/10/05 11:19:33 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i])
	{
		i++;
	}
	res = malloc(sizeof(char) * (i + 1));
	while (j < i)
	{
		res[j] = src[j];
		j++;
	}
	res[j] = '\0';
	return (res);
}

/*#include <stdio.h>

int main()
{
	char *test = "coucou";
	char *p;
	p = ft_strdup(test);
	printf("%s\n%s", test, p);
}*/
