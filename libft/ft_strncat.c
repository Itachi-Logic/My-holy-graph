/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Said Boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:42:33 by Said Boutayeb     #+#    #+#             */
/*   Updated: 2025/08/30 19:51:52 by Said Boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*deso;

	deso = dest + ft_strlen(dest);
	while (*src && 0 < n--)
		*deso++ = *src++;
	*deso = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[13] = "said";
	char	src[] = "boutayeb";
	printf("first dest: %s\n", dest);
	printf("first src: %s\n", src);
	printf("--------------------\n");
	ft_strncat(dest, src, 2);
	printf("new dest: %s\n", dest);
	printf("new src: %s\n", src);
}
*/
