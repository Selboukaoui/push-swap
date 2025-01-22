/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 01:05:55 by selbouka          #+#    #+#             */
/*   Updated: 2025/01/22 15:48:18 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH SWAP
# define PUSH SWAP

#include <limits.h>
typedef struct stack
{
	int	value;
	int	index;
	int	position;
	int	target;
	int	cost_a;
	int	cost_b;
	struct stack	*next;
	
}stack;
int	check_av(char **av);
int	check_sign(char *av);
int	check_zero(char *av);
int	check_dup(char *av);
int	digit(int c);
# endif