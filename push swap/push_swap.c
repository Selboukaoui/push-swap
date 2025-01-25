/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 01:06:16 by selbouka          #+#    #+#             */
/*   Updated: 2025/01/25 20:36:33 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void err(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int main(int ac, char **av)
{
	stack *stack_a;
	stack *stack_b;

	stack_a = NULL;	
	stack_b = NULL;	
	if (ac == 1)
		return (0);
	av = check_av(ac, av);
	if (is_sorted(av) == 1)
		return(0);
	stack_a =  add_args_to_a(av, stack_a);
	get_index(stack_a); 
	sorting(stack_a, stack_b);
	
}








































	// while (stack_a)
	// {
	// 	printf("---> ");
	// 	printf ("%d  -- > %d\n",stack_a->index,stack_a->content);
	// 	stack_a = stack_a->next;
	// }