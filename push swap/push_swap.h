/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 01:05:55 by selbouka          #+#    #+#             */
/*   Updated: 2025/01/25 20:44:39 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP
# define PUSH_SWAP

#include <limits.h>
#include <unistd.h>
#include "libft/libft.h"
#include <libc.h>



char	**check_av(int ac, char **av);
void	err(void);
void	free_(char **lst);
void	only_digit(char **lst);

void duplicate_arg_check(char **lst);
int		is_sorted(char **lst);

stack	*add_args_to_a(char **lst, stack *stack_a);
void	get_index(stack *list);
void 	free_(char **lst);


void sorting(stack *stack_a, stack *stack_b);
int	max_index(stack *stack);


# endif