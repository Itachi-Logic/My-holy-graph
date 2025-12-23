/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:21:36 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 15:21:40 by Itachi-Logic     ###   ########.fr       */
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
