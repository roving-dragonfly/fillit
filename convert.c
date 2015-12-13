/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalves <aalves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 11:15:44 by aalves            #+#    #+#             */
/*   Updated: 2015/12/13 19:14:37 by aalves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "fillit.h"

static void	check_shape(char *data, ssize_t read_value)
{
	int i;

	i = 1;
	while (i <= 4)
		if (data[(i++ * 5) - 1] != '\n')
			D_ERROR
	if (data[read_value - 1] != '\n')
		D_ERROR
}

t_list		*convert(int fd)
{
	t_list	*list;
	t_list	*head;
	char	buffer[BUFSIZE];
	ssize_t	read_value;
	char	end_ok;

	head = NULL;
	end_ok = 0;
	while ((read_value = read(fd, buffer, BUFSIZE)))
	{
		if (read_value != 21 && read_value != 20)
			D_ERROR
		if (read_value == 20)
			end_ok = 1;
		check_shape(buffer, read_value);
		list = ft_lstnew((char *)malloc(BUFSIZE), BUFSIZE);
		buffer[BUFSIZE - 2] = '\0';
		ft_strncpy(list->content, buffer, BUFSIZE);
		(!head) ? head = list : ft_lstaddend(head, list);
	}
	if (!end_ok)
		D_ERROR
	return (head);
}
