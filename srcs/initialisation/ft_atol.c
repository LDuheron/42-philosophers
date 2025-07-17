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
	return (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r');
}


static bool	is_overflow(long number)
{
	if (nbr > INT_MAX / 10)
	{
		log_error(OVERFLOW);
		return (true);
	}
	return (false);
}

static int	ft_atoi(const char *str)
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
			return (false); // change error code
		nbr = nbr * 10 + str[i] - 48;
		i++;
	}
	nbr = nbr * sign;
	return (nbr);
}
