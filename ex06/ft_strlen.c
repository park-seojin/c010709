/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojpark <qkrtjwls8546@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 21:21:25 by seojpark          #+#    #+#             */
/*   Updated: 2020/07/09 21:35:33 by seojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str)
{
	int		n;
	int		idx;
	char	c;

	n = 0;
	idx = 0;
	c = str[0];
	while (c != '\0')
	{
		n++;
		c = str[++idx];
	}
	return (n);
}
