/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalves <aalves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 11:03:22 by aalves            #+#    #+#             */
/*   Updated: 2015/12/11 19:32:17 by aalves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "fillit.h"

t_list	*get_data(int fd)
{
	t_list	*list;
	t_list	*valid_list;

	list = convert(fd);
	fd = open("valid_input", O_RDONLY);
	if (fd == -1)
		D_ERROR
	valid_list = convert(fd);
	check_validity(list, valid_list);

	return (list);
}
