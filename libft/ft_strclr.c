/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:24:10 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 15:24:14 by Itachi-Logic     ###   ########.fr       */
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
