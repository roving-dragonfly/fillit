/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalves <aalves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 10:43:04 by aalves            #+#    #+#             */
/*   Updated: 2015/12/13 23:18:42 by aalves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "fillit.h"

static char *temp(char *s, char y)
{
	while(y)
	{
		s += ft_strlen(s) + 1;
		y--;
	}
	return s;
}

static void put_content(t_list *elem)
{
	char i;
	t_tetri	*tetri;

	i = 0;
	tetri = elem->content;
	printf("%c\n", tetri->letter);
	while(i < tetri->y)
	{
		ft_putendl(temp((char *)tetri->piece, i));
		i++;
	}
	ft_putstr("\n");
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
	//print_sorted(data);

	return (0);
}
