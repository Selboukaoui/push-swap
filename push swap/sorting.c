/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:32:16 by selbouka          #+#    #+#             */
/*   Updated: 2025/01/25 20:56:47 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void s_three(stack *stack_a)
{
	int	i;
	
	i = max_index(stack_a);
	if (stack_a->index == i)
		ra(stack_a);
	else if (stack_a->next->index == i)
		rra(stack_a);
	if (stack_a->index > stack_a->next->index)
		sa(stack_a);
}	



void sorting(stack *stack_a, stack *stack_b)
{
	if (ft_lstsize(stack_a) == 2)
		sa();
	else if (ft_lstsize(stack_a) == 3)
		s_three(stack_a);
}

