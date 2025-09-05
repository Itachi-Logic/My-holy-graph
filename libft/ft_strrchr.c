/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Said Boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 20:28:13 by Said Boutayeb     #+#    #+#             */
/*   Updated: 2025/09/02 17:34:46 by Said Boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*find;

	find = NULL;
	str = (char *) s;
	while (*str)
	{
		if (*str == (char) c)
			find = str;
		str++;
	}
	if (*str == (char) c)
		find = str;
	return (find);
}
/*
int main()
{
	char	str[] = "1said is a 1:good programer find me";
	printf("I FOND THIS: %s", ft_strrchr(str, '1'));
}
*/
