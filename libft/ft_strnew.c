/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 20:11:46 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/09/13 18:37:15 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = ft_memalloc(size + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}
/*
int main(void)
{
	int	i;
	char	*str;

	str = ft_strnew(5);
	i = 0;
	while (i < 6)
	{
		printf("index nember %i is: %d\n", i, str[i]);
		i++;
	}
}
*/
