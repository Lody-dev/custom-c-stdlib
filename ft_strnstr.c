/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viaremko <viaremko@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:38:56 by viaremko          #+#    #+#             */
/*   Updated: 2024/09/20 11:17:47 by viaremko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strnstr(const char *big, const char *little, unsigned int len){
unsigned int i = 0;
unsigned int little_len = 0;

if (*little =='\0'){
return (char *)big;
}
while (little[little_len] != '\0') {
        little_len++;
    }
while(i + little_len <= len){
	unsigned int j = 0;
	while(big[j+i]==little[j]){
		if(j==little_len){
			return(char *)big +i;
			}
		}
	i++;
	}
return 0;
}
