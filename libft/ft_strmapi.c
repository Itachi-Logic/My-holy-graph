/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:26:33 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 15:26:35 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	ft_odd_up(unsigned int i, char c)
{
	if (!(i % 2 == 0) && (c >= 'a' && c <= 'z'))
		return (c = c - 32);
	return (c);
}
char	ft_Even_up(unsigned int i, char c)
{
	if ((i % 2 == 0) && (c >= 'a' && c <= 'z'))
		return (c = c - 32);
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*newstr;

	i = ft_strlen(s);
	newstr = ft_strnew(i);
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		newstr[i] = f((unsigned int)i, s[i]);	
		i++;
	}
	return (newstr);
}

int	main(void)
{
	char	str[] = "said 1337 boutayeb";
	char	*newstr;

	printf("string is: %s\n", str);
	newstr = ft_strmapi(str, ft_Even_up);
	printf("new string is: %s\n", newstr);
}
