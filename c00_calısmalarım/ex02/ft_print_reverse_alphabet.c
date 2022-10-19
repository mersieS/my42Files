/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:14:46 by sbuker            #+#    #+#             */
/*   Updated: 2022/10/16 11:19:25 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int	let;

	let = 'z';
	while (let >= 'a')
	{
		ft_putchar(let);
		let--;
	}
}
