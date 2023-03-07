/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hd-souza <hd-souza@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:59:27 by hd-souza          #+#    #+#             */
/*   Updated: 2023/03/07 16:05:48 by hd-souza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0'))
    {
        if (s1[i] > s2[i])
        {
            return (1);
        }
        if (s1[i] < s2[i])
        {
            return (-1);
        }
        i++;
    }
    return (0);
}

/* int main()
{
    printf("%d \n", ft_strcmp("this is a sentence", "this is a bentence"));
    printf("%d \n", strcmp("this is a sentence", "this is a bentence"));
    printf("%d \n", ft_strcmp("this is a sentence", "this is not a bentence"));
    printf("%d \n", strcmp("this is a sentence", "this is not a bentence"));
    printf("%d \n", ft_strcmp("this is a 2345yjhgfds",
			"th21345tyujhgfdis is not a bentence"));
    printf("%d \n", strcmp("this is a 2345yjhgfds",
			"th21345tyujhgfdis is not a bentence"));
} */