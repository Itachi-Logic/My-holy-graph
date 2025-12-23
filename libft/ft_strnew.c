/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:27:38 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 15:27:39 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = ft_memalloc(size + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}
/*
int main(void)
{
	int	i;
	char	*str;

	str = ft_strnew(5);
	i = 0;
	while (i < 6)
	{
		printf("index nember %i is: %d\n", i, str[i]);
		i++;
	}
}
*/
