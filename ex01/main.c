/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojpark <qkrtjwls8546@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:53:38 by seojpark          #+#    #+#             */
/*   Updated: 2020/07/09 14:57:39 by seojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr);

int main(void)
{
	int i = 1423;
	int *i1 = &i;
	int **i2 = &i1;
	int ***i3 = &i2;
	int ****i4 = &i3;
	int *****i5 = &i4;
	int ******i6 = &i5;
	int *******i7 = &i6;
	int ********i8 = &i7;
	int *********i9 = &i8;
	ft_ultimate_ft(i9);
	printf("%d\n", i);
}
