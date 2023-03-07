/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hd-souza <hd-souza@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:03:58 by hd-souza          #+#    #+#             */
/*   Updated: 2023/02/27 16:42:47 by hd-souza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	potato;

	potato = '{';
	while (potato >= 'b')
	{
		potato--;
		write (1, &potato, 1);
	}
}

/*
int main ()
{
	ft_print_reverse_alphabet();
}
*/
