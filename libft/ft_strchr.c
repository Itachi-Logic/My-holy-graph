/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:23:47 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 15:23:52 by Itachi-Logic     ###   ########.fr       */
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
