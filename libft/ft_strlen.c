/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Said Boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 17:54:36 by Said Boutayeb     #+#    #+#             */
/*   Updated: 2025/08/24 18:08:22 by Said Boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
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
