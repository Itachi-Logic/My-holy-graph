/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Said Boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 15:53:56 by Said Boutayeb     #+#    #+#             */
/*   Updated: 2025/08/24 17:42:50 by Said Boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static void	ft_cpy8(unsigned char **dest, unsigned char **src, size_t *n)
{
	while (*n >= 8)
	{
		*(long long *) *dest = *(long long *) *src;
		*dest += 8;
		*src += 8;
		*n -= 8;
	}
	return ;
}

static void	ft_cpy4(unsigned char **dest, unsigned char **src, size_t *n)
{
	while (*n >= 4)
	{
		*(int *) *dest = *(int *) *src;
		*dest += 4;
		*src += 4;
		*n -= 4;
	}
	return ;
}

static void	ft_cpy2(unsigned char **dest, unsigned char **src, size_t *n)
{
	while (*n >= 2)
	{
		*(short *) *dest = *(short *) *src;
		*dest += 2;
		*src += 2;
		*n -= 2;
	}
	return ;
}

static void	ft_cpy1(unsigned char **dest, unsigned char **src, size_t *n)
{
	*(*dest) = *(*src);
	(*dest)++;
	(*src)++;
	(*n)--;
	return ;
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void			*orgdes;
	unsigned char	*dest1;
	unsigned char	*src1;

	dest1 = (unsigned char *) dest;
	src1 = (unsigned char *) src;
	orgdes = dest;
	while (n > 0 && ((unsigned long)dest1 % 8) != 0)
	{
		ft_cpy1(&dest1, &src1, &n);
	}
	ft_cpy8(&dest1, &src1, &n);
	ft_cpy4(&dest1, &src1, &n);
	ft_cpy2(&dest1, &src1, &n);
	while (n > 0)
	{
		ft_cpy1(&dest1, &src1, &n);
	}
	return (orgdes);
}
/*
int	main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("pleass give me src use just 4 char and numer do you want cpy");
		return (1);
	}
	
	int		i;
	char	dest[atoi(av[2])];

	ft_memcpy(dest, av[1], atoi(av[2]));
	i = 0;
	while (i < atoi(av[2]))
	{
		printf("%c", dest[i]);
		i++;
	}
	return (0);
}
*/
