/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hd-souza <hd-souza@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:08:13 by hd-souza          #+#    #+#             */
/*   Updated: 2023/03/06 19:47:01 by hd-souza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	ft_strlowcase(str);
	if (i == 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	while (str[i] != '\0')
	{
		if (((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64)))
		{
			if (str[j] >= 'a' && str[j] <= 'z')
				str[j] -= 32;
		}
		i++;
		j++;
	}
	return (str);
}

int main()
{
    char    str[] = "does!pot thi,ssd  work:potato likeALSDKV this";
    
    printf("%s", ft_strcapitalize(str));
}