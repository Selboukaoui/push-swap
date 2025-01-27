/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:44:31 by selbouka          #+#    #+#             */
/*   Updated: 2025/01/27 06:58:37 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_(char **lst)
{
	while (*lst)
		free((*lst)++);
	free(lst);
}

stack	*add_args_to_a(char **lst, stack **stack_a)
{
	stack *tmp;
	int		j;
	
	j = 0;
	while (lst[j])
	{
		tmp = ft_lstnew(ft_atoi(lst[j]));
		tmp->index = 0;
		ft_lstadd_back(stack_a, tmp);
		j++;
	}
	return ((*stack_a));
}

void	get_index(stack **list)
{
	stack	*tmp;
	stack	*tmp2;
	int		i;

	tmp = *list;
	i = 0;
	while (tmp)
	{
		tmp2 = *list;
		i = 0;
		while (tmp2)
		{
			if (tmp->content > tmp2->content)
				i++;
			tmp2 = tmp2->next;
		}
		tmp->index = i;
		tmp = tmp->next;
	}
}

int	max_index(stack *stack_a)
{
	int	i;
	stack	*tmp;
	
	i = 0;
	tmp = stack_a;
	while (tmp)
	{
		if (tmp->index > i)
			i = tmp->index;
		tmp = tmp->next;
	}
	return (i);
}