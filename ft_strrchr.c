/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hila <yel-hila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:38:28 by yel-hila          #+#    #+#             */
/*   Updated: 2022/12/08 15:34:07 by yel-hila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	p;

	p = (char)c;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == p)
			return ((char *)(str + i));
		i--;
	}
	return (0);
}