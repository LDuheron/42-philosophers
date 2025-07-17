

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

// static bool	initialisation_configuration(t_config *config, char **input_table, bool meal_limit)
// {
// 	int	try;

// 	try = 0;
// 	try += ((config->nb_philosophers = ft_atol(input_table[1])) == IS_OVERFLOW);
// 	try += ((config->time_to_die = ft_atol(input_table[2])) == IS_OVERFLOW);
// 	try += ((config->time_to_eat = ft_atol(input_table[3])) == IS_OVERFLOW);
// 	try += ((config->time_to_sleep = ft_atol(input_table[4])) == IS_OVERFLOW);
// 	config->nb_times_each_philosopher_must_eat = NO_MEAL_LIMIT;
// 	if (meal_limit)
// 		try += (config->nb_times_each_philosopher_must_eat = ft_atol(input_table[5]));
// 	printf("is_overflow : %i", try);
// 	return (try == (4 + ));
// }

bool	initialisation(t_shared *shared, char **input_table, bool meal_limit)
{
	initialisation_configuration(shared->config, input_table, meal_limit);
	return (SUCCESS);
}
