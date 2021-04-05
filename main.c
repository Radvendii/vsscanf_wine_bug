#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

void test(char *s, char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  vsscanf(s, fmt, ap);
  va_end(ap);
}

void main(void) {
  // with the following line uncommented, there are no problems.
  // with it commented, the program crashes when running through wine
  // sscanf(" ", " ");
  test(" ", " ");
}
