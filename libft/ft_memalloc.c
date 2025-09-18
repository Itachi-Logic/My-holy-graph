/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Said Boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 21:12:51 by Said Boutayeb     #+#    #+#             */
/*   Updated: 2025/09/17 19:28:12 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;

	str = malloc(size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, size);
	return (str);
}

void	*ft_memalloc_t(size_t size)
{
	void	*str;

	str = malloc(size);
	if (str == NULL)
		return (NULL);
	ft_memset(str, 3, size);
	return (str);
}
/*
int main(void)
{
	char	*str;
	int	i;

	str = ft_memalloc(3);
	i = 0;
	while (i <= 4)
	{
		printf("index %i is: %i\n", i, str[i]);
		i++;
	}
	//for test use this ft_memset(str, 3, size); and change ft_bzero(str, size);
}
*/
