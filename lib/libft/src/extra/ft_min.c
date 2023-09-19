/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 07:38:24 by cvidon            #+#    #+#             */
/*   Updated: 2022/01/28 07:42:23 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 ** Return the smallest of two numbers.
 */

int	ft_min(int a, int b)
{
	return (a * (a <= b) + b * (a > b));
}
