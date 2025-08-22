/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Said Boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 20:49:35 by Said Boutayeb     #+#    #+#             */
/*   Updated: 2025/08/18 20:59:40 by Said Boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int	main(int ac, char **av)
{
	int	is;

	if (ac != 2)
	{
		printf("Pleass Enter char or Digit\n");
		return (0);
	}
	is = ft_isprint(ft_atoi(av[1]));
	if (is == 0)
	{
		printf("Entered character is not print: %s\n", av[1]);
	}
	else if (is == 1)
		printf("Entered character is print: %s\n", av[1]);
}
*/
