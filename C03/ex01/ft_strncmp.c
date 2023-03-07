/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hd-souza <hd-souza@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:43:40 by hd-souza          #+#    #+#             */
/*   Updated: 2023/03/07 16:07:32 by hd-souza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
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
    printf("%d \n", ft_strncmp("this is a sentence", "this is a bentence", 30));
    printf("%d \n", strncmp("this is a sentence", "this is a bentence", 30));
    printf("%d \n", ft_strncmp("this is a sentence", "this is not a bentence", 24));
    printf("%d \n", strncmp("this is a sentence", "this is not a bentence", 24));
    printf("%d \n", ft_strncmp("this is a 2345yjhgfds",
			"th21345tyujhgfdis is not a bentence", 0));
    printf("%d \n", strncmp("this is a 2345yjhgfds",
			"th21345tyujhgfdis is not a bentence", 0));
} */