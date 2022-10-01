/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:19:38 by tdelgran          #+#    #+#             */
/*   Updated: 2022/09/14 21:03:51 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	alphabet;

		alphabet = 'a';
	while (alphabet <= 'z')
	{
		ft_putchar(alphabet++);
	}
}

/*int	main(void)
{
	ft_print_alphabet();
}*/
