SECTION	.text
			global	_ft_write

_ft_write:						; fd = rdi, buf = rsi, size =rdx
		mov		rax, 0x02000004	; system call for write
		syscall                	; invoke operating system to do the write
		jc		error			; EFLAGS
		ret
error:
		mov		rax, -1
		ret