/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:20:16 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 15:20:20 by Itachi-Logic     ###   ########.fr       */
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
