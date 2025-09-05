/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Said Boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 21:07:12 by Said Boutayeb     #+#    #+#             */
/*   Updated: 2025/08/31 18:29:56 by Said Boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	deslen;
	size_t	lenght;
	char	*deso;

	lenght = ft_strlen(dest);
	if (size <= lenght)
		return (size + ft_strlen(src));
	deslen = size - lenght;
	deso = dest + lenght;
	lenght = lenght + ft_strlen(src);
	while (deslen > 1 && *src)
	{
		*deso++ = *src++;
		deslen--;
	}
	*deso = '\0';
	return (lenght);
}
/*
int	main(void)
{
	char	dest[20] = "12";
	char	src[] = "A56";

	printf("first dest: %s\n", dest);
	printf("first src: %s\n", src);
	printf("--------------------\n");
	printf("lenght (src + dest) is: %li\n", ft_strlcat(dest, src, 4));
	printf("new dest: %s\n", dest);
	printf("new src: %s\n", src);
}
*/
