/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viaremko <viaremko@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:35:04 by viaremko          #+#    #+#             */
/*   Updated: 2024/09/14 13:35:08 by viaremko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//small[i] != '\0'
char *strnstr(const char big, const char small, unsigned int len){
if (*small == '\0') {
    return big;
}
if (*big == '\0' && *small != '\0' ) {
    return NULL;
}
unsigned int i = 0;

unsigned int start_index = 0;
 while(big[i] != '\0' && i < len){
	unsigned int y = 0;	
	while(big[i+y]==small[y] && (i+y) < len && small[y] != '\0'){
		
		y++;
		
		}
		
	
	if(small[y]=='\0'){
	return &big[i];
	}
}
i++;
}
return NULL;
}
