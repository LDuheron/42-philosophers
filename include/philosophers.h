
#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

# define SUCCESS 1
# define FAILURE 0

# define STD_OUT 1
# define STD_ERR 2

enum	e_error {
	USAGE,
};

enum e_status {
	DEAD,
	EATING,
	FULL,
	HAS_TAKEN_A_FORK,
	SLEEPING,
	THINKING
};

typedef struct e_shared {
	int	number_of_philo;
	int	time_to_eat;
	int	time_to_die;
	int	time_to_sleep;
	int	number_of_times_each_philosopher_must_eat;
}	t_shared;

int		main(int argc, char **argv);
bool	parsing(size_t size_table, char **input_table);

void	log_error(e_error CODE);

#endif
