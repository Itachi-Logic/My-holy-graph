/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Said Boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:10:58 by Said Boutayeb     #+#    #+#             */
/*   Updated: 2025/08/27 19:15:30 by Said Boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
/*
int	main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("please enter string you whant to cpy and num");
		return (1);
	}
	char	*src = av[1];
	char	*dest;
	int	n;
	
	n = ft_atoi(av[2]);
	dest = (char *)malloc((n * sizeof(char)) + 1);
	if (dest == NULL)
		return (1);
	printf("first dest is: %s\n", dest);
	ft_strncpy(dest, src, n);
	dest[n] = '\0';
	printf("fainal dest is: %s\n", dest);
	printf("src is: %s\n", src);
	free(dest);
}
*/
