/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hd-souza <hd-souza@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:12:51 by hd-souza          #+#    #+#             */
/*   Updated: 2023/03/04 12:58:02 by hd-souza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main()
{
	char	src[] = "this sentence is fr my src file";
	char	src1[] = "this sentence is for no reason at all";
	char	dest[] = "i am hungry";
	char	dest1[] = "i am still hungry";
	printf("%s \n", ft_strcpy(dest, src));
	printf("%s", strcpy(dest1, src1));
}
*/
