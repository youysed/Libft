/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hila <yel-hila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:39:57 by yel-hila          #+#    #+#             */
/*   Updated: 2022/12/08 16:08:06 by yel-hila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
       memset - fill memory with a constant byte

SYNOPSIS
       #include <string.h>

       void *memset(void *s, int c, size_t n);

DESCRIPTION
       The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.

RETURN VALUE
       The memset() function returns a pointer to the memory area s.

 */


#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*ret;

	ret = b;
	while (len--)
		*(unsigned char *)b++ = (unsigned char)c;
	return (ret);
}


// int main()
// {
//     char str[50] = "12345678910";
//     printf("\nBefore memset(): %s\n", str);
  
//     // Fill 2 characters starting from str[1] with '.'
//     ft_memset(str+1,'#', 2*sizeof(char));
  
//     printf("After memset():  %s", str);
//     return 0;
// }

// int main()
// {
//        int i = 1254;
//        ft_memset(&i,230,1);
//        ft_memset(&i,4,2);
// }

// 00000000 00000000 00000100 00000100 

// 00000100 11100110 
// 4          230