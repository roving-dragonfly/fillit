/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_shape.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalves <aalves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:57:22 by aalves            #+#    #+#             */
/*   Updated: 2015/12/04 16:37:13 by aalves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

void	check_shape(char *data)
{
	int i;

	i = 1;
	while (i <= 4)
		if (data[(i++ * 5) - 1] != '\n')
			D_ERROR
	if (data[BUFSIZE - 2] != '\n')
		D_ERROR
}
