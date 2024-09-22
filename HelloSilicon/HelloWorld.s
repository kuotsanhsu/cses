//
// Assembler program to print "Hello World!" to stdout.
//
// x0-x2 - parameters to Unix system calls
// x16 - Mach System Call function number
//

.global _main // The linker requires this symbol.
// https://developer.arm.com/documentation/101754/0622/armclang-Reference/armclang-Integrated-Assembler/Alignment-directives
.p2align 4 // Without this, I got a "bus error".

_main:
// write(STDOUT_FILENO, helloworld, 13)
  mov	x0, 1
  adr x1, helloworld
  mov x2, 13
// user_ssize_t write(int fd, user_addr_t cbuf, user_size_t nbyte);
  mov x16, 4
  svc 0x80
// return 0;
  mov x0, 0
  ret

helloworld: .ascii "Hello World!\n"
