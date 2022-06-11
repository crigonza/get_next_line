/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:59:33 by crigonza          #+#    #+#             */
/*   Updated: 2022/06/11 10:07:49 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../Libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct  s_stack
{
      int               nb;
      struct s_stack *next;
}                   t_stack;

int         main(int argc, char **argv);
int         *ft_parse(int argc, char **argv);
















# endif