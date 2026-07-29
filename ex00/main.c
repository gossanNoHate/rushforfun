/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquetier <vquetier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 19:46:21 by jbenhass          #+#    #+#             */
/*   Updated: 2026/07/29 20:24:54 by vquetier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "rush01.h"

int	raise_error()
{
	write(2, "Error\n", 6);
	return (1);
}

void	fill_with_zero(t_solution *sol)
{
	int	i;
	int	j;

	i = 0;
	while (i < sol->parsed.size)
	{
		j = 0;
		while (j < sol->parsed.size)
			sol->solution[i][j++] = 0;
		i++;
	}
}

int	main(int ac, char **av)
{
	t_solution	sol;

	if (parse_args(ac, av, &(sol.parsed)))
		return (raise_error());
	fill_with_zero(&sol);
	
	return 0;
}
