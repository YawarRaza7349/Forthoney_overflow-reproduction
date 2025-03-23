#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main(void) {
  int r = mkdir("proj", 0777);
  perror("ERORR");
  return r;
}
