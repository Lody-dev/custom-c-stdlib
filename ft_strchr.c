/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viaremko <viaremko@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:08:55 by viaremko          #+#    #+#             */
/*   Updated: 2024/09/19 11:28:23 by viaremko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *strchr(const char *s, int c){
unsigned int i = 0;
while(s[i] != '\0'){
if (s[i] == c){
return (char *)&s[i];
}
i++;
}
if(c=='\0'){
return (char *)&s[i];
}
return NULL;
}
