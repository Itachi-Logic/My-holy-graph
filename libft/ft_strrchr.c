/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:28:14 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 15:28:15 by Itachi-Logic     ###   ########.fr       */
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
