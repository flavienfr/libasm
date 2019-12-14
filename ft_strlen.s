section	.text
			global	ft_strlen

ft_strlen:
		move	rax, 0 ; rax = str "xor  rax,rax"
		jmp		inc_til_end
				rsi	;used to pass function
inc_til_end:
		inc		rax ; str++
		

		rax ;registre de retour