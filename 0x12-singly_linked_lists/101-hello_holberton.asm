section .data
	hello_format db "Hello, Holberton", 10, 0   ; The format string with a newline character

section .text
	global main

extern printf

main:
	push rbp			;Save the base pointer
	mov rdi, hello_format		;Load the format string address into rdi
	call printf			; Call the printf function
	pop rbp				; Restore the base pointer
	
	; Exit the program
	mov rax, 60			; syscall number for exit
	xor rdi, rdi			; status = 0
	syscall
