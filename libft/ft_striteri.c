/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 21:46:11 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/09/19 20:36:29 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
/*
void	ft_make(unsigned int i, char *s)
{
	if ((i == 0 || s[1] == '\0') && (*s >= 'a' && *s <= 'z'))
		*s = *s - 32;
	return ;
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}
/*
int	main(void)
{
	char	str[] = "hello 1337 I hope you x";

	printf("string before: %s\n", str);
	ft_striteri(str, ft_make);
	printf("string after: %s\n", str);
}
*/
