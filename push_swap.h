/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:13:08 by ktunchar          #+#    #+#             */
/*   Updated: 2023/02/28 22:13:11 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "include/libft.h"
# include "include/ft_printf.h"

typedef struct s_stack{
    int value;
    struct s_stack *lower;
} t_stack;

void    init_stack(t_stack **stack, char **av);
t_stack		*stack_pop(t_stack **head_stack);
void		stack_add(t_stack **head_stack, t_stack *new_node);
t_stack	*new_stack_node(int value);
int		display_stack(t_stack *stack);
int		stack_peek(t_stack **stack);
void	ft_push(t_stack **src, t_stack **dst);
void	ft_swap(t_stack **stack);
void	ft_rotate(t_stack **stack);
void	ft_rev_rotate(t_stack **stack);

#endif