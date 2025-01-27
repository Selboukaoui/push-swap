/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:32:16 by selbouka          #+#    #+#             */
/*   Updated: 2025/01/27 06:58:30 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void s_three(stack **stack_a)
{
	if ((*stack_a)->index == 2)
		ra(stack_a);
	else if ((*stack_a)->next->index == 2)
		rra(stack_a);
	if ((*stack_a)->content > (*stack_a)->next->content)
		sa(stack_a);
}

void	big_sort(stack	**stack_a, stack **stack_b, int range)
{
	int	i;

	i = 0;
	while (ft_lstsize(*stack_a) > 0)
	{
		if ((*stack_a)->index <= i)
		{
			pb(stack_a, stack_b);
			++i;
		}
		else if ((*stack_a)->index <= i + range)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			++i;
		}
		else
			ra(stack_a);
	}
}

int	best_move(stack *lst, int idx)
{
	int	i;
	int size;
	stack *tmp;

	tmp = lst;
	size = ft_lstsize(tmp) / 2;
	i = 0;
	while (i < size && tmp)
	{
		if (tmp->index == idx)
			return (1);
		i++;
		tmp = tmp->next;
	}
	return (0);
}

void	final_sort(stack **stack_a, stack **stack_b)
{
	int	idx;

	idx = max_index(*stack_b);
	// printf ("%d",idx);
	while (ft_lstsize(*stack_b)>0)
	{
		if ( *stack_b &&/*rm*/ (*stack_b)->index == idx)
		{
			pa(stack_a, stack_b);
			idx--;
		}
		else if ((*stack_b)->next->index == idx)
		{
			sb(stack_b);
			pa(stack_a, stack_b);
			idx--;
		}
		else
		{
			if (!best_move(*stack_b, idx))
				rrb(stack_b);
			else
				rb(stack_b);
		}
	}
}

void sorting(stack **stack_a, stack **stack_b)
{	
	if (ft_lstsize(*stack_a) == 2)
		sa(stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		s_three(stack_a);
	else
	{
		if (ft_lstsize(*stack_a) <= 100)
			big_sort(stack_a, stack_b, 15);
		else
			big_sort(stack_a, stack_b, 35);
	}
	final_sort(stack_a, stack_b);
}
