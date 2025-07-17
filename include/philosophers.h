/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-17 17:15:44 by lduheron          #+#    #+#             */
/*   Updated: 2025-07-17 17:15:44 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define SUCCESS 1
# define FAILURE 0

# define IS_OVERFLOW -42
# define NO_MEAL_LIMIT -1

# define STD_OUT 1
# define STD_ERR 2

# define INT_MAX 2147483647

enum e_error {
	OVERFLOW,
	USAGE,
	NB_ERROR
};

enum e_status {
	DEAD,
	EATING,
	FULL,
	HAS_TAKEN_A_FORK,
	SLEEPING,
	THINKING,
	NB_STATE
};

typedef struct s_config {
	long	time_to_die;
	long	time_to_eat;
	long	time_to_sleep;
	int		nb_philosophers;
	int		meal_limit;
}	t_config;

typedef struct s_shared {
	t_config	*config;

}	t_shared;

int		main(int argc, char **argv);
bool	parsing(size_t size_table, char **input_table);

void	log_error(enum e_error code);

bool	initialisation(t_shared *shared, char **input_table, bool meal_limit);
int		ft_atoi(const char *str);

#endif
