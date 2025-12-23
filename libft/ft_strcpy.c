/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:24:43 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 15:24:45 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*orgdest;

	orgdest = dest;
	while (*src)
	{
		*(dest++) = *(src++);
	}
	*dest = '\0';
	return (orgdest);
}
/*
int	main(int ac, char **av)
{
	char	*src;
	char	dest[ft_strlen(av[1]) + 1];

	if (ac != 2)
	{
		printf("pleas enter string!");
		return (1);
	}
	src = av[1];
	printf("dest is: %s\n", dest);
	printf("dest is: %s\n", ft_strcpy(dest, src));
	printf("src is: %s\n", src);
}
*/
