/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logger.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-17 13:51:37 by lduheron          #+#    #+#             */
/*   Updated: 2025-07-17 13:51:37 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

static	void	ft_putstr_fd(const char *str, int fd)
{
	if (str != NULL)
		write(fd, str, ft_strlen(str));
}

// // Add infos about concerned philospher
// void	log_action(e_status CODE)
// {
// 	static const char	*message[NB_STATE] = {
// 	[DEAD] = " died\n",
// 	[EATING] = "  is eating\n",
// 	[HAS_TAKEN_A_FORK] = " has taken a fork\n",
// 	[THINKING] = " is thinking\n",
// 	};

// 	ft_putstr_fd(message[CODE], STD_OUT);
// }

void	log_error(enum e_error code)
{
	static const char	*message[NB_ERROR] = {
	[USAGE] = "Usage is ./philo nb_philosophers \
time_to_die time_to_eat time_to_sleep \
[meal_limit]\n",
	[OVERFLOW] = "error: overflow",
	};

	ft_putstr_fd(message[code], STD_ERR);
}
