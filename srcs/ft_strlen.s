# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: froussel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/15 16:10:07 by froussel          #+#    #+#              #
#    Updated: 2019/12/15 16:10:15 by froussel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SECTION	.text
			global	_ft_strlen

_ft_strlen:
		mov		rax, 0				; i = 0
		jmp		inc_til_end			; while (str[i])

inc_til_end:
		cmp		BYTE [rdi + rax], 0	; 	if (str[i] == '\0')
		je		return				; 		return (i)
		inc		rax 				; 	i++
		jmp		inc_til_end
return:
		ret
