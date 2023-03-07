/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hd-souza <hd-souza@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:27:23 by hd-souza          #+#    #+#             */
/*   Updated: 2023/02/27 16:41:36 by hd-souza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/*
void ft_print_alphabet()
{
	char smol_letter;

	for (smol_letter = 'a'; smol_letter <= 'z'; smol_letter++){
		printf("%c", smol_letter);}
}

*/

void	ft_print_alphabet(void)
{
	char	smol_letter;

	smol_letter = 'a';
	smol_letter--;
	while (smol_letter <= 'y')
	{
		smol_letter++;
		write (1, &smol_letter, 1);
	}
}

/*
int main()
{
	ft_print_alphabet();
}
*/
