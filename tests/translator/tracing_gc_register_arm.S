.syntax unified
.arm
.fpu vfp
.text
.align 2
.global register_only_fixture
.type register_only_fixture,%function
register_only_fixture:
    push {r4,r5,r6,lr}
    mov r5,r0
    bl register_allocate
    mov r4,r0
    sub sp,sp,#4096
    mov r0,#0
    mov r1,sp
    add r2,sp,#4096
1:
    str r0,[r1],#4
    cmp r1,r2
    blo 1b
    add sp,sp,#4096
    mov r0,r5
    mov r1,#0
    mov r2,#0
    mov r3,#0
    mov r12,#0
    bl register_collect
    mov r0,r4
    pop {r4,r5,r6,pc}
.size register_only_fixture,.-register_only_fixture
.global register_vfp_only_fixture
.type register_vfp_only_fixture,%function
register_vfp_only_fixture:
    push {r4,r5,r6,lr}
    vpush {d8}
    mov r5,r0
    bl register_allocate
    mov r1,#0
    vmov d8,r0,r1
    sub sp,sp,#4096
    mov r0,#0
    mov r1,sp
    add r2,sp,#4096
2:
    str r0,[r1],#4
    cmp r1,r2
    blo 2b
    add sp,sp,#4096
    mov r0,r5
    mov r1,#0
    mov r2,#0
    mov r3,#0
    mov r12,#0
    bl register_collect
    vmov r0,r1,d8
    vpop {d8}
    pop {r4,r5,r6,pc}
.size register_vfp_only_fixture,.-register_vfp_only_fixture
.section .note.GNU-stack,"",%progbits
