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

static int	is_digit(char input)
{
	if (input >= '0' && input <= '9')
		return (SUCCESS);
	return (FAILURE);
}

static	int	is_valid_input(char *input_str)
{
	int	i;

	i = 0;
	if (!input_str)
		return (FAILURE);
	if (input_str[1] && input_str[0] == '+')
		i++;
	while (is_digit(input_str[i]) == SUCCESS)
		i++;
	if (input_str[i] == '\0')
		return (SUCCESS);
	return (FAILURE);
}

int	parsing(size_t size_table, char **input_table)
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
	return (resultat == SUCCESS);
}

