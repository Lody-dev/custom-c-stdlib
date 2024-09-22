/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viaremko <viaremko@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:03:33 by viaremko          #+#    #+#             */
/*   Updated: 2024/09/19 12:21:42 by viaremko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int memcmp(const void *s1, const void *s2, unsigned int n){
const unsigned char *str1 = (const unsigned char *)s1;
const unsigned char *str2 = (const unsigned char *)s2;
unsigned int i = 0;

while(i < n && str1[i] == str2[i]){
i++;
}
if(i == n){
return 0;
}
return str1[i]-str2[i];
}
