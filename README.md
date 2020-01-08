nasm -f elf64 hello.asm

SYMBOL

[label]   mnemonic   [operands]   [;comment]
INC COUNT        ; Increment the memory variable COUNT
MOV TOTAL, 48    ; Transfer the value 48 in the 
                 ; memory variable TOTAL
ADD AH, BH       ; Add the content of the 
                 ; BH register into the AH register
AND MASK1, 128   ; Perform AND operation on the 
                 ; variable MASK1 and 128
ADD MARKS, 10    ; Add 10 to the variable MARKS
MOV AL, 10       ; Transfer the value 10 to the AL register

/*************************************************************
mov x, y      	x ← y
and x, y	x ← x and y
or x, y	x ← x or y
xor x, y	x ← x xor y
add x, y	x ← x + y
sub x, y	x ← x – y
inc x	x ← x + 1
dec x	x ← x – 1
syscall	Invoke an operating system routine
db	A pseudo-instruction that declares bytes that will be in memory when the program runs
/*************************************************************
REGISTRE

generaux
RAX ; accumulateur, stockage du retour d’une fonction ou d’un appel systeme.
RCX ; compteur de boucle (instruction loop).
RDX ; registre de donnees, utilise lors des operations d’entrees/sorties et pour certains calculs longs (instructions div et mul).
RBX ; decalage dans le segment des donnees pointe par le registre DS.
RSP ; Stack Pointer : Pointeur de la position actuelle de la pile.
RBP ; Base Pointer : Pointeur du debut de la pile memoire du programme.
RSI ; Source Index : pointeur ”source” pour les operations sur des chaınes de caracteres.
RDI ; Destination Index : pointeur ”destination” pour les operations sur des chaınes de caracteres.

Index Registers
The 32-bit index registers, ESI and EDI, and their 16-bit rightmost portions. SI and DI, are used for indexed addressing and sometimes used in addition and subtraction. There are two sets of index pointers −
Source Index (SI) − It is used as source index for string operations.
Destination Index (DI) − It is used as destination index for string operations.
/*************************************************************

MOVSX moves a signed value into a register and sign-extends it with 1.

syscall
mov		rax, CODE	; Then RDI, RSI etc.. for params
					; Add 0x2000000 to the syscall number, see table below

LINKS

TUTO fr ++ : 
https://www.unilim.fr/pages_perso/tristan.vaccon/cours_nasm.pdf
NASM Tutorial:
	64 & 32 bits
https://cs.lmu.edu/~ray/notes/nasmtutorial/
http://sevanspowell.net/posts/learning-nasm-on-macos.html
	32 bits
https://www.tutorialspoint.com/assembly_programming/assembly_basic_syntax.htm
Bible: 
https://www.nasm.us/xdoc/2.13.01/html/nasmdoc0.html
Registre: 
https://www.cs.uaf.edu/2017/fall/cs301/reference/x86_64.html
system calls: 
https://filippo.io/making-system-calls-from-assembly-in-mac-os-x/
Code example:
https://www.csee.umbc.edu/portal/help/nasm/sample_64.shtml#hello_64.asm
Cheat sheet
https://www.cs.uaf.edu/2017/fall/cs301/reference/x86_64.html

