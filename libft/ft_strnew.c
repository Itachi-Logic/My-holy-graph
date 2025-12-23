/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 21:27:25 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/09/19 21:27:31 by said-boutayeb    ###   ########.fr       */
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
