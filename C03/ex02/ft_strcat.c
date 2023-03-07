/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hd-souza <hd-souza@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:08:11 by hd-souza          #+#    #+#             */
/*   Updated: 2023/03/07 16:31:09 by hd-souza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char    *ft_strcat(char *dest, char *src)
{
    unsigned int i;
    unsigned int j;
    unsigned int
    int q;

    i = 0;
    q = 0;
    if(dest[i] != '\0')
    {
        q += ft_strlen(dest);
    }
    j = 0;
    if(src[j] != '\0')
    {
        q += ft_strlen(src);
    }
    char    temp[q];
    
    while(
}