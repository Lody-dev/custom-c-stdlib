/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viaremko <viaremko@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:15:58 by viaremko          #+#    #+#             */
/*   Updated: 2024/09/18 13:38:59 by viaremko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void *ft_memmove(void *dest, const void *src, unsigned int n){
char *s=(char *)src;
char *d=(char *)dest;
unsigned int i = 0;
if(d == s){
	return dest;
}

if (d < s){
	while(i < n){
	d[i]=s[i];
	i++;
	}
return dest;
}

else{
	i = n;
		while (i > 0){
		d[i-1]=s[i-1];
		i--;
	}
return dest;
}
}
