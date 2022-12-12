//Compile the main.c with mymalloc.c file with this on the command: gcc -Wall -Wextra main.c mymalloc.c -o main && ./main
#include <stddef.h>

// Header file for the myalloc library

// Structure representing a page of memory
struct ph {
  struct ph *prev;
  struct ph *next;
  struct meta *start;
  size_t ss;
};

// Structure representing a block of memory on a page
struct meta {
  struct meta *prev;
  struct meta *next;
  int free;
  size_t size;
};

// Initialize a new page of memory with the specified size
void *init_page(struct ph *prev_ph, size_t size);

// Split a block of memory into two smaller blocks
void cut_space(struct meta *m, size_t size);

// Allocate a block of memory with the specified size
void *mymalloc(size_t size);

void *myrealloc(void *ptr, size_t size);
