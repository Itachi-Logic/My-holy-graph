/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Said Boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 18:48:15 by Said Boutayeb     #+#    #+#             */
/*   Updated: 2025/09/02 17:33:00 by Said Boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*find;
	unsigned char	fnc;

	fnc = (unsigned char) c;
	find = (char *) s;
	while (*find)
	{
		if (*find == fnc)
			return (find);
		find++;
	}
	if (fnc == *find)
		return (find);
	return (NULL);
}
/*
int main()
{
	char	str[] = "said is a good programer find me";
	printf("I FOND THIS: %s", ft_strchr(str, 'i'));
}
*/
