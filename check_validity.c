/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_validity.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalves <aalves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 16:22:42 by aalves            #+#    #+#             */
/*   Updated: 2015/12/04 19:20:04 by aalves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	valid_symbols(t_list *list)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = list->content;
	while (i <= 3)
	{
		while (j <= 3)
		{
			if (str[j + i * 5] != '.' && str[j + i * 5] != '#')
				D_ERROR
			j++;
		}
		i++;
		j = 0;
	}
}

static void	valid_number(t_list *list)
{
	int		i;
	int		j;
	int		n;
	char	*str;

	i = 0;
	j = 0;
	n = 0;
	str = list->content;
	while (i <= 3)
	{
		while (j <= 3)
		{
			if (str[j + i * 5] == '#')
				n++;
			j++;
		}
		i++;
		j = 0;
	}
	if (n != 4)
		D_ERROR
}


void	check_validity(t_list *list)
{
	ft_lstiter(list, valid_symbols);
	ft_lstiter(list, valid_number);

}