BITS 32

jmp short one

two:
	pop ecx
	xor eax, eax
	mov al, 4
	xor ebx, ebx
	inc ebx
	xor edx, edx
	mov edx, 15
	int 0x80

	mov al, 1
	mov ebx, 0
	int 0x80

one:
	call two
	db "Hello World!", 0x0a, 0x0d