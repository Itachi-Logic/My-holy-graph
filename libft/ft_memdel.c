/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:22:34 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 15:22:37 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
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
	ft_memdel((void **)&str_m);
	if (str_m == NULL)
		printf("it is work!\n");
	else 
		return (0);
}
*/
