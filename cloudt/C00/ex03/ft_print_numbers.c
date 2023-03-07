/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hd-souza <hd-souza@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:31:01 by hd-souza          #+#    #+#             */
/*   Updated: 2023/02/27 16:45:52 by hd-souza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	nombre;

	nombre = '/';
	while (nombre <= '8')
	{
		nombre++;
		write (1, &nombre, 1);
	}
}

/*
int main()
{
	ft_print_numbers();
}
*/
