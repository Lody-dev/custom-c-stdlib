/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viaremko <viaremko@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:46:44 by viaremko          #+#    #+#             */
/*   Updated: 2024/09/19 12:00:03 by viaremko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memchr(const void *s, int c, unsigned int n){
char *str = (unsigned char *)s;
unsigned int i = 0;
while(i < n){
if(str[i] == (unsigned char)c){
return &s[i];
}
i++;
}
return NULL;
}
