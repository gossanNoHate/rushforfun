/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquetier <vquetier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 19:46:21 by jbenhass          #+#    #+#             */
/*   Updated: 2026/07/29 20:12:22 by vquetier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "rush01.h"

int	raise_error()
{
	write(2, "Error\n", 6);
	return (1);
}

t_solution	*create_sol(t_parsed *parsed)
{
	t_solution	*sol;

	sol = malloc(sizeof(t_solution));
	if (sol == NULL)
		return NULL;
	sol->parsed = parsed
	sol
}

int	main(int ac, char **av)
{
	t_parsed	*parsed;

	parsed = parse_args(ac, av);
	if (parsed == NULL)
		return (raise_error());
	
	sol = create_sol();
}
