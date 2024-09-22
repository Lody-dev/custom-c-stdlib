/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viaremko <viaremko@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:29:13 by viaremko          #+#    #+#             */
/*   Updated: 2024/09/19 11:37:23 by viaremko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strrchr(const char *s, int c){
int i = 0;
while(s[i] != '\0'){
i++;
}
if(c=='\0'){
return (char *)&s[i];
}
while (i >= 0){
if(s[i]==c){
return (char *)&s[i];
}
i--;
}
return NULL;
}
