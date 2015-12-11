/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalves <aalves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 11:15:44 by aalves            #+#    #+#             */
/*   Updated: 2015/12/04 12:34:36 by aalves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "fillit.h"

t_list	*convert(int fd)
{
	t_list	*list;
	t_list	*head;
	char	buffer[BUFSIZE];
	ssize_t	read_value;

	head = NULL;
	while ((read_value = read(fd, buffer, BUFSIZE)))
	{
		if (read_value == -1)
			D_ERROR
		check_shape(buffer);
		list = ft_lstnew((char *)malloc(BUFSIZE), BUFSIZE);
		buffer[BUFSIZE - 2] = '\0';
		ft_strncpy(list->content, buffer, BUFSIZE);
		if (!head)
			head = list;
		else
			ft_lstaddend(head, list);
	}
	return (head);
}
