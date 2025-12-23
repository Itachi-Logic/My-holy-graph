/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:23:32 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 15:23:34 by Itachi-Logic     ###   ########.fr       */
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
