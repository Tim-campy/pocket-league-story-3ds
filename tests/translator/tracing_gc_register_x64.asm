; Windows x64 ABI fixture. At the call boundary the sole fixture-owned managed
; reference is RBX; the collector must retain it via registers or ABI spills.
EXTERN register_allocate:PROC
EXTERN register_collect:PROC
.code
register_only_fixture PROC FRAME
    push rbx
    .pushreg rbx
    push r12
    .pushreg r12
    sub rsp, 40
    .allocstack 40
    .endprolog
    mov r12, rcx
    call register_allocate
    mov rbx, rax
    ; Scrub the abandoned allocator frames without storing RBX there.
    sub rsp, 4096
    xor eax, eax
    xor r8d, r8d
scrub:
    mov qword ptr [rsp+r8], rax
    add r8, 8
    cmp r8, 4096
    jne scrub
    add rsp, 4096
    mov rcx, r12
    xor eax, eax
    xor edx, edx
    xor r8d, r8d
    xor r9d, r9d
    call register_collect
    mov rax, rbx
    add rsp, 40
    pop r12
    pop rbx
    ret
register_only_fixture ENDP
END
