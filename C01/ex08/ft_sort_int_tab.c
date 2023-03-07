/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hd-souza <hd-souza@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:10:39 by hd-souza          #+#    #+#             */
/*   Updated: 2023/03/01 15:36:43 by hd-souza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	guac;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				guac = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = guac;
			}
			i++;
		}
		size--;
	}
}

/*
int	main()
{
	int tab[10] = {40, 85, 66, 78, 54, 36, 24, 95, 0, 15};
	int	size = 10;
	int	i;

	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d,", tab[i]);
		i++;
	}
}
*/
