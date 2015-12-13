/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_format.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalves <aalves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 19:16:45 by aalves            #+#    #+#             */
/*   Updated: 2015/12/13 18:20:43 by aalves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "fillit.h"

/*
	Reference list

	0 - 3		barre verticale
	4 - 7		barre horizontale
	8 - 16		carre
	17 - 22		L symetrie haut
	23 - 29		L symetrie haut + droit
	30 - 36		L
	37 - 42		L symetrie gauche
	43 - 48		L allonge symetrie bas
	49 - 54		L allonge symetrie droit
	55 - 60		L allonge
	61 - 65		L allonge symetrie gauche
	66 - 71		T allonge
	72 - 77		T allonge symetrie gauche
	78 - 83		T
	84 - 89		T symetrie haut
	90 - 95		Z haut
	96 - 101 	Z haut symetrie gauche
	102 - 107	Z symetrie droite
	108 - 113	Z
*/

static void	put_in_piece(t_tetri *tetri, char *data, char x, char y)
{

	tetri->piece = (char **)malloc(sizeof(data));
	ft_memcpy(tetri->piece, data, sizeof(data));
	tetri->x = x;
	tetri->y = y;
}

static char	t(char ref, char low, char high)
{
	if (ref >= low && ref <= high)
		return (1);
	return (0);
}

void	set_format(t_tetri *tetri, char ref)
{
	(t(ref, 0, 3))		? put_in_piece(tetri, "#\0#\0#\0#\0", 1, 4) : "";
	(t(ref, 4, 7))		? put_in_piece(tetri, "####\0", 4, 1) : "";
	(t(ref, 8, 16))		? put_in_piece(tetri, "##\0##\0", 2, 2) : "";
	(t(ref, 17, 22))	? put_in_piece(tetri, "##\0#.\0#.\0", 2, 3) : "";
	(t(ref, 23, 29))	? put_in_piece(tetri, "##\0.#\0.#\0", 2, 3) : "";
	(t(ref, 30, 36))	? put_in_piece(tetri, "#.\0#.\0##\0", 2, 3) : "";
	(t(ref, 37, 42))	? put_in_piece(tetri, ".#\0.#\0##\0", 2, 3) : "";
	(t(ref, 43, 48))	? put_in_piece(tetri, "###\0..#\0", 3, 2) : "";
	(t(ref, 49, 54))	? put_in_piece(tetri, "###\0#..\0", 3, 2) : "";
	(t(ref, 55, 60))	? put_in_piece(tetri, "..#\0###\0", 3, 2) : "";
	(t(ref, 61, 65))	? put_in_piece(tetri, "#..\0###\0", 3, 2) : "";
	(t(ref, 66, 71))	? put_in_piece(tetri, "#.\0##\0#.\0", 2, 3) : "";
	(t(ref, 72, 77))	? put_in_piece(tetri, ".#\0##\0.#\0", 2, 3) : "";
	(t(ref, 78, 83))	? put_in_piece(tetri, "###\0.#.\0", 3, 2) : "";
	(t(ref, 84, 89))	? put_in_piece(tetri, ".#.\0###\0", 3, 2) : "";
	(t(ref, 90, 95))	? put_in_piece(tetri, ".#\0##\0#.\0", 2, 3) : "";
	(t(ref, 96, 101)) 	? put_in_piece(tetri, "#.\0##\0.#\0", 2, 3) : "";
	(t(ref, 102, 107))	? put_in_piece(tetri, ".##\0##.\0", 3, 2) : "";
	(t(ref, 108, 113))	? put_in_piece(tetri, "##.\0.##\0", 3, 2) : "";
}