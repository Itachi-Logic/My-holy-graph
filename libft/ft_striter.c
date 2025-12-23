/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:25:09 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 15:25:11 by Itachi-Logic     ###   ########.fr       */
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
