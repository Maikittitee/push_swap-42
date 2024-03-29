/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_inst_rev_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:09:28 by ktunchar          #+#    #+#             */
/*   Updated: 2023/04/12 17:02:31 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// sa sb ss pa pb ra rb rr rra rrb rrr

#include "push_swap.h"

int	ft_rr(t_stack **a, t_stack **b)
{
	ft_rotate(a);
	ft_rotate(b);
	ft_putendl_fd("rr", 1);
	return (1);
}

int	ft_rra(t_stack **a)
{
	ft_rev_rotate(a);
	ft_putendl_fd("rra", 1);
	return (1);
}

int	ft_rrb(t_stack **b)
{
	ft_rev_rotate(b);
	ft_putendl_fd("rrb", 1);
	return (1);
}

int	ft_rrr(t_stack **a, t_stack **b)
{
	ft_rev_rotate(a);
	ft_rev_rotate(b);
	ft_putendl_fd("rrr", 1);
	return (1);
}
