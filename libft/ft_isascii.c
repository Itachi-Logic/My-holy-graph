/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:20:45 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 15:20:48 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
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
	is = ft_isascii(ft_atoi(av[1]));
	if (is == 0)
	{
		printf("Entered character is not ascii: %s\n", av[1]);
	}
	else if (is == 1)
		printf("Entered character is ascii: %s\n", av[1]);
}
*/
