/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:24:23 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 15:24:25 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *(s1++) == *(s2++))
		;
	return (*(--s1) - *(--s2));
}
/*
int main(void)
{
	char	str1[] = "asaid";
	char	str2[] = "bsaid";
	printf("Strcmp is: %i\n", ft_strcmp(str1, str2));

	//while (*s1 && *s1 == *s2)
	//{
	//	s1++;
	//	s2++;
	//}
        //return (*s1 - *s2);
}
*/
