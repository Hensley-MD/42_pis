/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hd-souza <hd-souza@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:27:13 by hd-souza          #+#    #+#             */
/*   Updated: 2023/03/06 17:55:16 by hd-souza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int main()
{
    printf("%d \n", ft_str_is_printable("SDBFWERHGFDHGF"));
    printf("%d \n", ft_str_is_printable("SDJKBFKBMFsk545nkdSDGD"));
    printf("%d \n", ft_str_is_printable(" \n \v \t "));
}  */