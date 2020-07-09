/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojpark <qkrtjwls8546@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:03:48 by seojpark          #+#    #+#             */
/*   Updated: 2020/07/09 15:15:53 by seojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <untistd.h>

void	ft_swap(int *a, int *b)
{
	temp = *a;
	*a = *b;
	*b = temp;
}
