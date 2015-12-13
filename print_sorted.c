/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalves <aalves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 18:29:08 by aalves            #+#    #+#             */
/*   Updated: 2015/12/13 23:18:41 by aalves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	n_link(t_list *list)
{
	char i;
	char letter;
	t_tetri *tetri;

	i = 0;
	letter = 'A';
	while (list)
	{	
		tetri = list->content;
		tetri->letter = letter + i;
		list = list->next;
		i++;
	}
	return (i);
}

void	print_sorted(t_list *list)
{
	char	i;
	char	**square;

	i = n_link(list);
	if (i > 26)
		D_ERROR
	square = make_square(i  * 4);
	find_optimal_placement(square, list);

}