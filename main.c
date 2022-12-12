// //Compile the main.c with mymalloc.c file with this on the command: gcc -Wall -Wextra main.c mymalloc.c -o main && ./main
// #include <stdio.h>
// #include "mymalloc.h"

// int main(void) {
  
//   // Allocate a block of memory with the specified size
//   void *ptr = mymalloc(0);

//   // Print the address of the allocated memory
//   printf("ptr = %p\n", ptr);

//   // Resize the allocated block of memory to the specified size
//   ptr = myrealloc(ptr, 2048);

//   // Print the address of the resized memory
//   printf("ptr = %p\n", ptr);

//   myfree(ptr);

//   mycleanup();
//   return 0;
// }

#include <stdio.h>
#include "mymalloc.h"

int main(void) {
  // Initialize the custom memory allocator
  myinit(NULL, 1024 * 1024);

  // Allocate some blocks of memory
  void *ptr1 = mymalloc(100);
  printf("ptr = %p\n", ptr1);
  void *ptr2 = mymalloc(200);
  printf("ptr = %p\n", ptr2);
  void *ptr3 = mymalloc(300);
  printf("ptr = %p\n", ptr3);

  // Use the allocated memory blocks
  // ...

  // Reallocate the first memory block
  ptr1 = myrealloc(ptr1, 400);
  printf("ptr = %p\n", ptr1);
  ptr2 = myrealloc(ptr2, 400);

  // Free the second and third memory blocks
  myfree(ptr2);
  printf("ptr2 = %p\n", ptr2);
  ptr2 = myrealloc(ptr2, 300);
  myfree(ptr3);
  printf("ptr3 = %p\n", ptr3);

  // Clean up and free all memory allocated by the custom allocator
  mycleanup();
  printf("ptr3 = %p\n", ptr3);

  return 0;
}
