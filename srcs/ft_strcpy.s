section	.text
			global	_ft_strcpy

_ft_strcpy:
		mov		rcx, 0
inc_til_end:
		cmp		BYTE [rsi + rcx], 0
		je		return
		mov		dl, BYTE [rsi + rcx]
		mov		BYTE [rdi + rcx], dl
		inc		rcx		
		jmp		inc_til_end
return:
		mov		BYTE [rdi + rcx], 0
		mov		rax, rdi
		ret
