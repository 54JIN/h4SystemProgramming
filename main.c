//Compile the main.c with mymalloc.c file with this on the command: gcc -Wall -Wextra main.c mymalloc.c -o main && ./main
#include <stdio.h>
#include "mymalloc.h"

int main(void) {
  // Allocate a block of memory with the specified size
  void *ptr = mymalloc(1024);

  // Print the address of the allocated memory
  printf("ptr = %p\n", ptr);

  // Resize the allocated block of memory to the specified size
  ptr = myrealloc(ptr, 2048);

  // Print the address of the resized memory
  printf("ptr = %p\n", ptr);

  return 0;
}
