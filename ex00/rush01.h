/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquetier <vquetier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 19:46:21 by vquetier          #+#    #+#             */
/*   Updated: 2026/07/29 20:19:24 by vquetier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_parsed
{
	int	size;
	int	constraint[81];
	int	constraint_size;
}	t_parsed;

typedef struct	s_solution
{
	t_parsed	parsed;
	int			solution[9][9];
}	t_solution;


#endif
