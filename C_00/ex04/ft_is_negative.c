/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:53:57 by tdelgran          #+#    #+#             */
/*   Updated: 2022/09/15 10:03:44 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_is_negative(int n)

{
	if (n > 0)
	{
		ft_putchar('P');
	}
	else if (n == 0)
	{
		ft_putchar('P');
	}
	else if (n < 0)
	{
		ft_putchar('N');
	}
}

/*int	main(void)

{
	ft_is_negative(-2);
}*/
