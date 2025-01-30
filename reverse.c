/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 08:14:54 by selbouka          #+#    #+#             */
/*   Updated: 2025/01/26 21:59:43 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

stack	*befor_last(stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst->next->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}

void reverse(stack **ab)
{
	stack	*tmp;
	stack	*last;
	stack	*befor_lst;

	if (!*ab || !ft_lstlast(*ab))
		return ;
	last = ft_lstlast(*ab);
	befor_lst = befor_last(*ab);
	tmp = (*ab);
	(*ab) = last;
	(*ab)->next = tmp;
	befor_lst->next = NULL;
}

void	rra(stack **a)
{
	write (1, "rra\n", 4);
	reverse(a);
}

void	rrb(stack **b)
{
	write (1, "rrb\n", 4);
	reverse(b);
}

void	rrr(stack **a, stack **b)
{
	write (1, "rrr\n", 4);
	reverse(a);
	reverse(b);
}