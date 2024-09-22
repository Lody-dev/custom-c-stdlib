/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viaremko <viaremko@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:33:31 by viaremko          #+#    #+#             */
/*   Updated: 2024/09/17 14:45:10 by viaremko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dest, const void *src, unsigned int n){
char *d = (char *)dest;
const char *s = (const char *)src;
unsigned int i = 0;

while(i < n)
{
	d[i]=s[i];
	i++;
}
return dest;
}
