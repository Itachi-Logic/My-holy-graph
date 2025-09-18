/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 18:26:14 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/09/17 19:25:32 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_strdel(char **as)
{
	ft_memdel((void **)&*as);
}
/*
int	main(void)
{
	char	*str_m;
	int	i;

	str_m = ft_memalloc(3);
	i = 0;
	while (i <= 2)
	{
		printf("index %i is: %i\n", i, str_m[i]);
		i++;
	}
	ft_strdel(&str_m);
	if (str_m == NULL)
		printf("it is work!\n");
	else 
		return (0);
}
*/
