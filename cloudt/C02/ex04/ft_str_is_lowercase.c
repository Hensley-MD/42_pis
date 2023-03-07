/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hd-souza <hd-souza@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:14:19 by hd-souza          #+#    #+#             */
/*   Updated: 2023/03/06 17:50:56 by hd-souza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int main()
{
    printf("%d \n", ft_str_is_lowercase("sdndfkjbnkdjfnbrnbj"));
    printf("%d \n", ft_str_is_lowercase("234ggdfd"));
    printf("%d \n", ft_str_is_lowercase(""));
}
*/
