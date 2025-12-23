/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:27:52 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 15:27:55 by Itachi-Logic     ###   ########.fr       */
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
