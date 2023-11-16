section .data
    hello_msg db "Hello, Holberton", 0
    format_spec db "%s\n", 0

section .text
    extern printf
    global main

main:
    ; Set up arguments for printf
    mov rdi, format_spec  ; Format specifier
    mov rsi, hello_msg    ; Address of the hello message

    ; Call printf
    call printf

    ; Exit the program
    mov eax, 0            ; Return value 0
    ret

