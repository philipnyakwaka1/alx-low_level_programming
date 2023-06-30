; 64-bit program in assembly that prints Hello, Holberton, followed by a new line
section .text
	global _start
_start:
	move edx, len
	mov ecx, msg
	mov ebx, 1
	mov eax, 4
	int 0x80
	mov eax, 1
	int 0x080

section .data
	message db "Hello, Holberton", 0xa
	len equ $ -message
