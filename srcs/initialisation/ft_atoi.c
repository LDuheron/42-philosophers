/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-17 16:57:42 by lduheron          #+#    #+#             */
/*   Updated: 2025-07-17 16:57:42 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

static bool	is_digit(char input)
{
	return (input >= '0' && input <= '9');
}

static bool	is_sign(char c)
{
	return (c == '+' || c == '-');
}

static bool	is_whitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' || c == '\v'
		|| c == '\f' || c == '\r');
}


static bool	is_overflow(long nbr)
{
	if (nbr > INT_MAX / 10)
	{
		log_error(OVERFLOW);
		return (true);
	}
	return (false);
}

int	ft_atoi(const char *str)
{
	long	nbr;
	int		i;
	int		sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while (is_whitespace(str[i]))
		i++;
	if (is_sign(str[i]))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (is_digit(str[i]))
	{
		if (is_overflow(nbr))
			return (IS_OVERFLOW);
		nbr = nbr * 10 + str[i] - 48;
		i++;
	}
	nbr = nbr * sign;
	return (nbr);
}
