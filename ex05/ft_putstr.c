/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojpark <qkrtjwls8546@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:51:49 by seojpark          #+#    #+#             */
/*   Updated: 2020/07/09 21:13:57 by seojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr(char *str)
{
	char	c;
	int		idx;

	idx = 0;
	c = str[0];
	while(c != '\0')
	{
		write(1, &c, 1);
		c = str[++idx];
	}
}
