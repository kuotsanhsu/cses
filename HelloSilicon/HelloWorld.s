//
// Assembler program to print "Hello World!" to stdout.
//
// x0-x2 - parameters to Unix system calls
// x16 - Mach System Call function number
//

.global _main // The linker requires this symbol.
.align 4 // Without this, I got a "bus error".

_main:
// write(STDOUT_FILENO, helloworld, 13)
  mov	x0, 1
  adr x1, helloworld
  mov x2, 13
// user_ssize_t write(int fd, user_addr_t cbuf, user_size_t nbyte);
  mov x16, 4
  svc 0x80

// exit(0);
  mov x0, 0
// void exit(int rval) NO_SYSCALL_STUB;
  mov x16, 1
  svc 0x80

helloworld: .ascii "Hello World!\n"
