/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 21:25:26 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/09/19 21:25:30 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
/*
char	ft_putc(char c)
{
	if (!(c >= 'a' && c <= 'z'))
		return ('N');
	else
		return ('Y');
}
*/
char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*new;

	i = ft_strlen(s);
	new = ft_strnew(i);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(s[i]);
		i++;
	}
	return (new);
}
/*
int	main(void)
{
	char	str[] = "said-1337-boutayeb";
	char	*new;

	printf("str: %s\nnew:\n", str);
	new = ft_strmap(str, ft_putc);
	printf("str: %s\nnew: %s\n", str, new);
}
*/
