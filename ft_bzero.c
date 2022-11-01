/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hila <yel-hila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:41:58 by yel-hila          #+#    #+#             */
/*   Updated: 2022/10/28 18:41:58 by yel-hila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
DESCRIPTION
       The bzero() function erases the data in the n bytes of the memory starting at the location pointed to by s, by
       writing zeros (bytes containing '\0') to that area.

       The explicit_bzero() function performs the same task as bzero().  It differs from bzero() in that  it  guaran‐
       tees  that  compiler optimizations will not remove the erase operation if the compiler deduces that the opera‐
       tion is "unnecessary".

RETURN VALUE
       None.
*/
#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

int main( void )
  {
    char b[10];

    ft_bzero(b,10);

	printf("%s",b);
    return (0);
  }
