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
