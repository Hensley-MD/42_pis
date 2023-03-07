/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hd-souza <hd-souza@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:23:35 by hd-souza          #+#    #+#             */
/*   Updated: 2023/03/01 12:26:25 by hd-souza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
int	main()
{
	int	a;
	int	b;
	int	*x = &a;
	int	*y = &b;

	a = 0;
	b = 0;
	ft_div_mod(25, 10, &a, &b);
	printf("%d \n", a);
	printf("%d", b);
}
*/
