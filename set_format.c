/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_format.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalves <aalves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 19:16:45 by aalves            #+#    #+#             */
/*   Updated: 2015/12/11 19:49:29 by aalves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "fillit.h"

/*
	Reference list

	0 - 3	barre verticale
	4 - 7	barre horizontale
	8 - 16	carre
	17 - 28	L symetrie haut




*/

static char	**put_in_piece(t_tetri *tetri, char *data, char x, char y)
{

	tetri->piece = (char **)malloc(sizeof(data));
	ft_memcpy(tetri->piece, data, sizeof(data));
	tetri->x = x;
	tetri->y = y;
}

void	set_format(t_tetri *tetri, char ref)
{

	if (ref <= 3)
		put_in_piece(&(tetri->piece), "#\0#\0#\0#\0", 1, 4);
	if (ref <= 7)
		put_in_piece(&(tetri->piece), "####\0", 4, 1);
	if (ref <= 16)
		put_in_piece(&(tetri->piece), "##\0##\0", 2, 2);
	if (ref <= 28)
		put_in_piece(&(tetri->piece), "##\0#\0#\0", 2, 3);
	



}