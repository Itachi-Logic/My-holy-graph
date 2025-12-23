/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:21:09 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 15:21:14 by Itachi-Logic     ###   ########.fr       */
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
