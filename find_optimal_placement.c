/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_optimal_placement.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalves <aalves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 21:02:22 by aalves            #+#    #+#             */
/*   Updated: 2015/12/13 23:18:39 by aalves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char	placable(char **square, t_tetri *tetri, char x, char y)
{
	char i;
	char j;

	i = tetri->y;
	j = tetri->x;
	while (i)
	{
		while(j)
		{
			if ()
		}
	}
}

static	char	place(char **square, t_tetri *tetri)
{
	char x;
	char y;

	x = 0;
	y = 0;

	while (square[y][0])
	{
		while (square[y][x])
		{
			if (placable(square, tetri, x, y))
			{
				stamp(tetri->piece, x, y);
				return (1);
			}
			x++;
		}
		y++;
	}
	return (0);
}

void	find_optimal_placement(char **square, t_list *list)
{
	if (!list)
		return ;

	if (place(square, list->content))
		find_optimal_placement(square, list->next);
	else



}

