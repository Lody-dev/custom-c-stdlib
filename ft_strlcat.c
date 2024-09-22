/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viaremko <viaremko@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:42:23 by viaremko          #+#    #+#             */
/*   Updated: 2024/09/14 12:51:02 by viaremko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, const char *src, unsigned int size){
unsigned int src_len = 0;
unsigned int dest_len = 0;

while(src[src_len] != '\0'){
src_len++;
}
while(dest[dest_len] != '\0'){
dest_len++;
}
if(size == 0 || dest_len >= size){
return (src_len+dest_len);
}
unsigned int i = 0;
while(src[i] != '\0' && (dest_len + i) < size -1){
dest[dest_len + i] = src[i];
i++;
}
dest[dest_len + i] = '\0';
return (src_len+dest_len);
}
