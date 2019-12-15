# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcpy.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: froussel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/15 17:18:46 by froussel          #+#    #+#              #
#    Updated: 2019/12/15 17:18:47 by froussel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section	.text
			global	_ft_strcpy

_ft_strcpy:
		i		dd, 0				; int i = 0
		mov		rax, //dest
		jmp		inc_til_end			; while (str[i])
		
inc_til_end:
		cmp		BYTE [rax + rdi], 0	; if (str[i] == '\0')
		je		return				; 	return (i)
		mov		BYTE [rsi + rdi], BYTE [rax + rdi]
		inc		rax 				; i++
		jmp		inc_til_end			; while (str[i])
return:
		ret
