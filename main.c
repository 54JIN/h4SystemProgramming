#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "mymalloc2.h"

int main(void) {
  // Allocate a block of memory with the specified size
  void *ptr = malloc(1024);

  // Print the address of the allocated memory
  printf("ptr = %p\n", ptr);

  // Resize the allocated block of memory to the specified size
  ptr = realloc(ptr, 2048);

  // Print the address of the resized memory
  printf("ptr = %p\n", ptr);

  return 0;
}
