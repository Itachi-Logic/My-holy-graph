/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:24:54 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 15:24:56 by Itachi-Logic     ###   ########.fr       */
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
