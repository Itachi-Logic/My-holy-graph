/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Said Boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:42:10 by Said Boutayeb     #+#    #+#             */
/*   Updated: 2025/08/17 21:14:16 by Said Boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
int	main(int argc, char **argv)
{
	char	c;

	if (argc < 2)
	{
		printf("give me argument pleass: ");
		return (1);
	}
	c = argv[1][0];
	if (ft_isalpha(c) != 0)
		printf("%c >> this is alpha\n", c);
	else
		printf("%c >> this is not alpha\n", c);
}
*/
