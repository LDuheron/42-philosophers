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

static	void	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
		write(fd, s, ft_strlen(s));
}

void	log_error(e_error CODE)
{
	static const char	*message[CODE] = {
	[USAGE] = "Usage is ./philo number_of_philosophers \
		time_to_die time_to_eat time_to_sleep \
		[number_of_times_each_philosopher_must_eat]\n",
	};

	ft_putstr_fd(message[CODE], stderr);
}
