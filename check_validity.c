/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_validity.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalves <aalves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 16:22:42 by aalves            #+#    #+#             */
/*   Updated: 2015/12/11 19:32:18 by aalves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdlib.h>

static char	get_ref(t_list *list, t_list *valid_list)
{
	char i;

	i = 0;
	while(valid_list)
	{
		if(!ft_strcmp(list->content, valid_list->content))
			return (i);
		valid_list = valid_list->next;
		i++;
	}
	D_ERROR
}


static void	del(void *a, size_t b)
{
	a++;
	b++;
}

void	check_validity(t_list *list, t_list *valid_list)
{
	char ref;

	while (list)
	{
		ref = get_ref(list, valid_list);
		free(list->content);
		list->content = (t_tetri *)malloc(sizeof(t_tetri));
		set_format(list->content, ref);
		list = list->next;
	}
	ft_lstdel(&valid_list, del);

}
