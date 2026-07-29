/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbenhass <jbenhass@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 19:47:59 by jbenhass          #+#    #+#             */
/*   Updated: 2026/07/29 20:02:26 by jbenhass         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

t_parsed	*parse_args(int argc, char **args)
{
	int	*constraint;
	int	size;

	if (argc != 2 || !args[1])
		return (NULL);
	while (args[1][size])
		size++;
	
	constraint = malloc(sizeof(int) * size)
}
