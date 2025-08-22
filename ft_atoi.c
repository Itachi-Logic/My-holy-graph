/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Said Boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:05:26 by Said Boutayeb     #+#    #+#             */
/*   Updated: 2025/08/17 21:09:55 by Said Boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sum;
	int	nb;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	sum = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sum = sum * (-1);
		i++;
	}
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (sum * nb);
}
/*
int	main(int ac, char **av)
{
	if (ac != 2)
        {
		write(1, "pleass give me number!\n", 24);
		return 0;
        }
        printf("number is: %i\n", ft_atoi(av[1]));
}
*/
