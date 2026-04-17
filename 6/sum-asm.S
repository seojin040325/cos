.global sum

sum:
    movl %edi, %eax   # a → eax
    addl %esi, %eax   # eax += b
	ret

.section .note.GNU-stack,"",@progbits
