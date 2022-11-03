/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hila <yel-hila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:42:02 by yel-hila          #+#    #+#             */
/*   Updated: 2022/10/28 18:42:02 by yel-hila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include "libft.h"

int		ft_atoi(const char *s)
{
	int		i;
	size_t	n;
	int		sign;

	sign = 1;
	i = 0;
	n = 0;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		n = n * 10 + s[i] - '0';


		if (n > 9223372036854775807)
			return ((sign > 0) ? -1 : 0);
		i++;
	}
	return (n * sign);
}

int main(int ac, char **av)
{
	int  mine ;
	int theirs ;
if (ac == 2)
{

	mine = ft_atoi(av[1]);
	theirs = atoi(av[1]);
	printf("mine : %d theirUs : %d \n",mine,theirs);
}
return(0);


}

