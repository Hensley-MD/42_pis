/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hd-souza <hd-souza@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:17:39 by hd-souza          #+#    #+#             */
/*   Updated: 2023/02/27 17:00:03 by hd-souza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	display(int nb)
{
	int	f;
	int	s;

	if (nb >= 10)
	{
		f = nb / 10;
		s = nb % 10;
		ft_putchar(f + 48);
		ft_putchar(s + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + 48);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			display (i);
			ft_putchar(' ');
			display(j);
			if (i < 98 || j < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}

/*
int main ()
{
	ft_print_comb2();
}
*/
/*
void	ft_print_comb2(void)
{
	int	a = 0;
	while (a <= 9)
	{
		int	b = 0;
		while (b <= 9)
		{
			int	c = 0;
			while (c <= 9)
			{
				int	d = 0;
				while (d <= 9)
				{
					char	holy[7];

					holy[0] = a+'0';
					holy[1] = b+'0';
					holy[2] = ' ';
					holy[3] = c+'0';
					holy[4] = d+'0';
					holy[5] = ',';
					holy[6] = ' ';

					write (1, &holy, 7);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int main ()
{
	ft_print_comb2();
}
*/
