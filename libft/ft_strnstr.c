/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Said Boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 18:18:36 by Said Boutayeb     #+#    #+#             */
/*   Updated: 2025/09/05 16:52:03 by Said Boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*find;
	const char	*str;
	char		*point;

	if (*needle == '\0')
		return ((char *) haystack);
	point = (char *) haystack + len;
	while (haystack < point && *haystack)
	{
		find = needle;
		str = haystack;
		while (*find == *str && str < point && *find)
		{
			find++;
			str++;
		}
		if (*find == '\0')
			return ((char *) haystack);
		haystack++;
	}
	return (NULL);
}
/*
int main(void)
{
	char	str[] = "0123400089AB";
	char	find[] = "000";
	printf("I %s\n", ft_strnstr(str, find, 8));
}
*/
