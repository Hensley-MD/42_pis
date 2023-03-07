/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hd-souza <hd-souza@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:37:19 by hd-souza          #+#    #+#             */
/*   Updated: 2023/03/01 15:36:11 by hd-souza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	burp;

	i = 0;
	while (i < (size / 2))
	{
		burp = tab[i];
		tab [i] = tab [size -1 - i];
		tab [size - 1 - i] = burp;
		i++;
	}
}
/*
int	main()
{
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = 10;
	int i;

	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d,", tab[i]);
		i++;
	}
}
*/
