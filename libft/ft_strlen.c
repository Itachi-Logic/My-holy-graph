/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:25:56 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 15:26:07 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
int	main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("give me a string please!");
		return (1);
	}
	printf("leanth is: %zu\n", ft_strlen(av[1]));
	return (0);
}
*/
