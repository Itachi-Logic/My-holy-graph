/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 21:24:40 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/09/19 21:24:50 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_strclr(char *s)
{
	ft_bzero(s, ft_strlen(s));
	return ;
}
/*
int	main(void)
{
	size_t	len;
	size_t	i;
	char	str[] = "Said Boutayeb";

	len = ft_strlen(str);
	printf("first str: %s\n", str);
	ft_strclr(str);
	i = 0;
	while (i <= len)
	{
		printf("first str:%zu %c\n", i, str[i]);
		i++;
	}
}
*/
