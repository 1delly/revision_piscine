/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 09:05:15 by tdelgran          #+#    #+#             */
/*   Updated: 2022/09/18 09:47:48 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while(a <= '9')
	{
		b = a + 1;
		while(b <= '8')
		{
			c = b + 1;
			while(c <= '9')
			{
				d = c + 1;
				while(d <= '9')
				{
					ft_putchar(d);
					ft_putchar(c);
					write(1, " ", 1);
					ft_putchar(b);
					ft_putchar(a);
					if(b != '8')
						write(1, ", ", 1);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
