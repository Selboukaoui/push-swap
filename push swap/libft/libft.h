/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:01:39 by selbouka          #+#    #+#             */
/*   Updated: 2025/01/27 06:00:34 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>


typedef struct stack
{
	int				content;
	int				index;
	struct stack 	*next;
}stack;

int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);
int	ft_isdigit(int n);

stack	*ft_lstnew(int content);
stack	*ft_lstlast(stack *lst);
void	ft_lstadd_front(stack **lst, stack *new);
int		ft_lstsize(stack *lst);
void	ft_lstadd_back(stack **lst, stack *new);

#endif