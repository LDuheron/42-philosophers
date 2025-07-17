
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialisation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-17 17:11:22 by lduheron          #+#    #+#             */
/*   Updated: 2025-07-17 17:11:22 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

// bool	allocation()
// {
// 	while < nb philo 
// 	if  create thread == SUCCESS
// 		cool
// 	exit




// 	resultat += (pthread create); +0
// 	resultat += (pthread create); +1
// 	resultat += (pthread create); +1
// 	resultat += (pthread create); 
// 	resultat += (pthread create); 
// 	resultat += (pthread create); 
// 	resultat += (pthread create); 
// 	resultat += (pthread create); 

// 	resultat == nb philo 

//  }

static bool	init_config(t_config *config, char **input_table, bool meal_limit)
{
	int	try;

	config = malloc(sizeof(t_config));
	if (!config)
		return (false);

	config->nb_philosophers = ft_atoi(input_table[1]);
	config->time_to_die = ft_atoi(input_table[2]);
	config->time_to_eat = ft_atoi(input_table[3]);
	config->time_to_sleep = ft_atoi(input_table[4]);

	try = 0;
	try += (config->nb_philosophers == IS_OVERFLOW);
	try += (config->time_to_die == IS_OVERFLOW);
	try += (config->time_to_eat == IS_OVERFLOW);
	try += (config->time_to_sleep == IS_OVERFLOW);

	config->meal_limit = NO_MEAL_LIMIT;
	if (meal_limit)
	{
		config->meal_limit = ft_atoi(input_table[5]);
		try += (config->meal_limit == IS_OVERFLOW);
	}
	return (try == 0);
}

bool	initialisation(t_shared *shared, char **input_table, bool meal_limit)
{

	init_config(shared->config, input_table, meal_limit);

	return (true);
}
