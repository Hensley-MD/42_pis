/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hd-souza <hd-souza@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:20:47 by hd-souza          #+#    #+#             */
/*   Updated: 2023/03/06 17:53:43 by hd-souza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
    printf("%d \n", ft_str_is_uppercase("SDBFWERHGFDHGF"));
    printf("%d \n", ft_str_is_uppercase("SDJKBFKBMFsknkdSDGD"));
    printf("%d \n", ft_str_is_uppercase("DNBKDD23MBKE<V"));
}
*/
