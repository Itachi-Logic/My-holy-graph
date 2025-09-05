/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Said Boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:11:01 by Said Boutayeb     #+#    #+#             */
/*   Updated: 2025/09/03 17:54:16 by Said Boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*str;
	char		*find;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack)
	{
		find = (char *) needle;
		str = (char *) haystack;
		while (*str == *find && *find)
		{
			str++;
			find++;
		}
		if (*find == '\0')
			return ((char *) haystack);
		haystack++;
	}
	return (NULL);
}
/*
int main()
{
	char	str[] = "isfaabc pleahaH";
	char	find[] = "abc";
	printf("I %s\n", ft_strstr(str, find));
}
*/
