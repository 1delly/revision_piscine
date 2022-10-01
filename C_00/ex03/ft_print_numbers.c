/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:31:52 by tdelgran          #+#    #+#             */
/*   Updated: 2022/09/14 17:57:43 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_print_numbers(void)

{
	char	num;

	num = '0';
	while (num <= 57)
	{
		ft_putchar(num++);
	}
}

/*int	main(void)

{
	ft_print_numbers();
}*/
