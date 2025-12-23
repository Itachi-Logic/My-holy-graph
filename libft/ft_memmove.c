/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:22:55 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 15:22:58 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static void	ft_cpy8(unsigned char **dest, unsigned char **src, size_t *n)
{
	while (*n >= 8)
	{
		*dest -= 8;
		*src -= 8;
		*(unsigned long *) *dest = *(unsigned long *) *src;
		*n -= 8;
	}
	return ;
}

static void	ft_cpy4(unsigned char **dest, unsigned char **src, size_t *n)
{
	while (*n >= 4)
	{
		*dest -= 4;
		*src -= 4;
		*(int *) *dest = *(int *) *src;
		*n -= 4;
	}
	return ;
}

static void	ft_cpy2(unsigned char **dest, unsigned char **src, size_t *n)
{
	while (*n >= 2)
	{
		*dest -= 2;
		*src -= 2;
		*(short *) *dest = *(short *) *src;
		*n -= 2;
	}
	return ;
}

static void	ft_cpy1(unsigned char **dest, unsigned char **src, size_t *n)
{
	(*dest)--;
	(*src)--;
	**dest = **src;
	(*n)--;
	return ;
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void			*orgdes;
	unsigned char	*dest2;
	unsigned char	*src2;

	orgdes = dest;
	if (src < dest && dest < src + n)
	{
		dest2 = (unsigned char *)dest + n;
		src2 = (unsigned char *)src + n;
		while (n > 0 && ((unsigned long)dest2 % 8) != 0)
			ft_cpy1(&dest2, &src2, &n);
		ft_cpy8(&dest2, &src2, &n);
		ft_cpy4(&dest2, &src2, &n);
		ft_cpy2(&dest2, &src2, &n);
		ft_cpy1(&dest2, &src2, &n);
		return (orgdes);
	}
	else
		return (ft_memcpy(dest, src, n));
}
/*
int main(void)
{
	char	buffer[30] = "12345ABCDEfghijKLMNO";
	char	*src = buffer;
	char	*dest = buffer + 5;
	size_t	n;

	n = 10;
	printf("in the first: %s\n", buffer);
	ft_memmove(dest, src, n);
	printf("the end: %s\n", buffer);
	return (0);
}
*/
