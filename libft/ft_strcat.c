/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Said Boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:24:47 by Said Boutayeb     #+#    #+#             */
/*   Updated: 2025/08/30 19:17:31 by Said Boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*deso;

	deso = dest + ft_strlen(dest);
	while (*src)
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
	ft_strcat(dest, src);
	printf("new dest: %s\n", dest);
	printf("new src: %s\n", src);

}
*/
