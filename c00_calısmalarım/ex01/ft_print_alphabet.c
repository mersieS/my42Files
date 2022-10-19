/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:59:09 by sbuker            #+#    #+#             */
/*   Updated: 2022/10/16 11:13:32 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_alphabet(void)
{
	int	let;

	let = 'a';
	while (let <= 'z')
	{
		ft_putchar(let);
		let++;
	}
}
