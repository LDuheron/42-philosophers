/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-16 14:25:48 by lduheron          #+#    #+#             */
/*   Updated: 2025-07-16 14:25:48 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

static bool	is_digit(char input)
{
	return (input >= '0' && input <= '9');
}

static	bool	is_valid_input(char *input_str)
{
	int	i;

	i = 0;
	if (!input_str)
		return (false);
	if (input_str[1] && input_str[0] == '+')
		i++;
	while (is_digit(input_str[i]) == true)
		i++;
	return (input_str[i] == '\0');
}

bool	parsing(size_t size_table, char **input_table)
{
	size_t	i;
	size_t	resultat;

	i = 1;
	resultat = 0;
	while (i < size_table)
	{
		resultat += is_valid_input(input_table[i]);
		i++;
	}
	return (resultat == (size_table - 1));
}
