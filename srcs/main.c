/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-16 14:22:15 by lduheron          #+#    #+#             */
/*   Updated: 2025-07-16 14:22:15 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"
#include <string.h>

int	main(int argc, char **argv)
{
	// t_shared	shared;

	if (!(argc == 5 || argc == 6) || parsing(argc, argv) == false)
	{
		log_error(USAGE);
		return (EXIT_FAILURE);
	}
	// initialisation(&shared, argv, (argc == 6));
	return (EXIT_SUCCESS);
}
