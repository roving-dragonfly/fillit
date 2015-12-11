/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalves <aalves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 10:43:04 by aalves            #+#    #+#             */
/*   Updated: 2015/12/05 09:00:55 by aalves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "fillit.h"

void put_content(t_list *elem)
{
	ft_putstr(elem->content);
	ft_putstr("\n\n");
}



int	main(int argc, char **argv)
{
	int		fd;
	t_list	*data;

	if (argc != 2)
		D_ERROR
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		D_ERROR
	data = get_data(fd);
	ft_lstiter(data, put_content);

	return (0);
}
