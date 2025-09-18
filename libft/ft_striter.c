/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 19:37:10 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/09/18 20:41:43 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
/*
void	capitalize(char *capitalize)
{
	if (*capitalize >= 'a' && *capitalize <= 'z')
	{
		*capitalize = *capitalize - 32;
	}
	return ;
}

void	lowercase(char *lowercase)
{
	if (*lowercase >= 'A' && *lowercase <= 'Z')
	{
		*lowercase = *lowercase + 32;
	}
	return ;
}
*/
void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(&s[i]);
		i++;
	}
	return ;
}
/*
int	main(void)
{
	char	str[] = "ASDFGH||||asdfgh";

	printf("this is new nm: %s\n", str);
	ft_striter(str, lowercase);
	printf("this is new nm: %s\n", str);
}
*/
