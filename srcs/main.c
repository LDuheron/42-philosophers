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

int	main(int argc, char **argv)
{
	if (!(argc == 5 || argc == 6) || parsing(argc, argv) == false)
	{
		printf("error: usage\n");
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}