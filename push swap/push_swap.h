/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 01:05:55 by selbouka          #+#    #+#             */
/*   Updated: 2025/01/27 20:08:00 by selbouka         ###   ########.fr       */
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

int	best_move(stack *lst, int idx);
stack	*add_args_to_a(char **lst, stack **stack_a);
void	get_index(stack **list);
void 	free_(char **lst);


int	max_index(stack *stack);

void s_three(stack **stack_a);
void	big_sort(stack	**stack_a, stack **stack_b, int range);
void sorting(stack **stack_a, stack **stack_b);


void	rra(stack **a);
void	rrb(stack **b);
void	rrr(stack **a, stack **b);

void	pa(stack **a, stack **b);
void	pb(stack **a, stack **b);

void	ra(stack **a);
void	rb(stack **b);
void	rr(stack **a, stack **b);


void	sa(stack **a);
void	sb(stack **b);

# endif