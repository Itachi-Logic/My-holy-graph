/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:19:33 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 15:19:40 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
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
	is = ft_isalnum(av[1][0]);
	if (is == 0)
	{
		printf("Entered character is not alphanumeric: %s\n", av[1]);
	}
	else if (is == 1)
		printf("Entered character is alphanumeric: %s\n", av[1]);
}
*/
