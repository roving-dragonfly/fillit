/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalves <aalves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 19:43:11 by aalves            #+#    #+#             */
/*   Updated: 2015/12/13 20:59:57 by aalves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "fillit.h"

static get_minimal_square(char area)
{
	unsigned int i;

	i = 2;
	while (i * i < area)
		i++;
	return ((char)i);

}

char	**make_square(char size)
{
	char	**square;
	char i;
	char minimal_square;

	i = 0;
	minimal_square = get_minimal_square(size);
	square = (char **)malloc(size * sizeof(char *));
	while (i < size)
	{
		square[i] = (char *)malloc(size);
		if(i < minimal_square)
			ft_memset(square[i], '.', size);
		else
			ft_bzero(square[i], size);
		i++;
	}
	return (square);
}
