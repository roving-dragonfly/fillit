/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalves <aalves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 10:51:15 by aalves            #+#    #+#             */
/*   Updated: 2015/12/13 23:18:41 by aalves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdio.h>
# include <stdlib.h>

# include "./libft/libft.h"

//# define D_ERROR { ft_putstr("error"); exit(EXIT_FAILURE); }
//A placer post normalisation
# define D_ERROR { printf("Error in %s at line %d\n", __FILE__, __LINE__); exit(EXIT_FAILURE); }
# define BUFSIZE 21

typedef struct	s_tetri
{
	char	x;
	char	y;
	char	letter;
	char	**piece;
}				t_tetri;


t_list	*get_data(int fd);
t_list	*convert(int fd);
void	check_validity(t_list *list, t_list *valid_list);
void	set_format(t_tetri *tetri, char ref);
void	print_sorted(t_list *list);
char	**make_square(char size);

#endif