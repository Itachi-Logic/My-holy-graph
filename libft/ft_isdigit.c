/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Said Boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 19:48:29 by Said Boutayeb     #+#    #+#             */
/*   Updated: 2025/08/17 21:12:50 by Said Boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(int ac, char **av)
{
	int	is;

	if (ac != 2)
	{
		printf("pleass give me number!\n");
		return (0);
	}
	is = ft_isdigit(av[1][0]);
	if (is == 0)
	{
		printf("that is not digit: %s\n", av[1]);
	}
	else if (is == 1)
		printf("that is digit: %s\n", av[1]);
}
*/
