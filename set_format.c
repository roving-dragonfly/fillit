/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_format.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalves <aalves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 19:16:45 by aalves            #+#    #+#             */
/*   Updated: 2015/12/11 19:32:20 by aalves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>
/*




*/

static void

void	set_format(t_tetri *tetri, char ref)
{

	if (ref >= 0 && ref <= 3)
	{
		tetri->piece = (char **)malloc(sizeof("#\0#\0#\0#\0"));
		ft_memcpy(tetri->piece, bar1, sizeof("#\0#\0#\0#\0"));
	}
	else if (ref >= 0 && ref <= 3)
	{
		tetri->piece = (char **)malloc(sizeof(bar2));
		ft_memcpy(tetri->piece, bar1, sizeof(bar2));
	}



}