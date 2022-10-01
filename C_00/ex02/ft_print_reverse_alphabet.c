/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:34:51 by tdelgran          #+#    #+#             */
/*   Updated: 2022/09/14 17:29:21 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)

{
	char	reverse;

	reverse = 'z';
	while (reverse >= 'a')
	{
		ft_putchar(reverse--);
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
}*/
