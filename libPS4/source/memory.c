#include "syscall.h"

#include "memory.h"

SYSCALL(mmap, 477);
SYSCALL(munmap, 73);

SYSCALL(getMemoryInfo, 547);
SYSCALL(getOtherMemoryInfo, 572);
