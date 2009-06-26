/* Public Domain */
#include <sys/syscall.h>
#include <unistd.h>
extern void _mcleanup();
void _exit(int n) {
  _mcleanup();
  syscall(SYS_exit,n);
}
