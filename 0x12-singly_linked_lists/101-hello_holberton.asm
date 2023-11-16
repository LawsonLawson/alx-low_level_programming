extern printf ; Declare the printf function

section .text
global main ; Declare the entry point of the program 'main'

main:
push rbp ; Save the base pointer to the stack, preparing for function prologue

mov rdi, fmt ; First argument; Format specifier
mov rsi, msg ; Second argument; Address of the message
mov rax, 0 ; clear the RAX register
call printf ; call the printf function

pop rbp ; Restore the base pointer, undoing the function prologue

mov rax, 0 ; Set the return value in FAX to 0 (successfull program)
ret ; Return from 'main'

section .data
msg: db "Hello, Holberton", 0 ; Null-terminated string
fmt: db "%s", 10, 0 ; Format specifier "%s" followed by '\n' and '\0'
