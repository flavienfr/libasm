SECTION	.text
			global	_ft_strcmp

_ft_strcmp:
		mov		rax, 0
inc_til_end:
		cmp		BYTE [rsi + rax], 0
		je		return
		cmp		BYTE [rdi + rax], 0
		je		return
		mov		dl, BYTE [rdi + rax]
		cmp		BYTE [rsi + rax], dl
		jne		return
		inc		rax		
		jmp		inc_til_end
lower:
		mov		rax, -1
		ret
greater:
		mov		rax, 1
		ret
equal:
		mov		rax, 0
		ret
return:
		mov 	dl, BYTE [rdi + rax]
		sub		dl, BYTE [rsi + rax]
		cmp		dl, 0
		je		equal
		jge		greater
		jle		lower
		ret
