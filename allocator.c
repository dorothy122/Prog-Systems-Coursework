#include "allocator.h"
#include <stdint.h>
#include <stdio.h>

// globals 
uint8_t *heap_start;
size_t total_heap_size;
unsigned char repeating_pattern[] = {0,0,0,0,0}; // global so that mm_free() can access it 

// store a blockHeader in first position of each block of memory in the heap 
struct blockHeader {
	size_t size;
	int allocated; // 1 = allocated, 0 = not 
};


int main() {

	// example testharness that just initialises a heap with a repeating pattern 
	uint8_t heap[50];
	uint8_t pattern[5] = {0xA5, 0x5A, 0xC3, 0x3C, 0x96};
	for (int i = 0; i < 50; i++) {
		heap[i] = pattern[i%5];
	};

	int result = mm_init(heap, sizeof(heap));
	printf("\nResult: %d\n", result);

};


int mm_init(uint8_t *heap, size_t heap_size) {
// Initialise the allocator over the supplied memory region. 
// Returns 0 on success and non-zero on failure. 
// unit8_t = data type: unsigned int of eaxctly 8 bits
// *heap = declared pointer that stores address of a heap (created in testharness.c)

// remember where the heap start and its size (parameters)
heap_start = heap;
total_heap_size = heap_size;

// detect the reccuring 5-byte pattern - so can fill with this after freeing memory 
for (int i = 0; i < 5; i++) {
	repeating_pattern[i] = *(heap + i);
	printf("%d\n", repeating_pattern[i]);
};


// set up memory-management metadata (how it will keep track of which blocks 
	// are free, which are allocated, how large each is, where each starts + ends),

// initialise first block header (empty so one header)
struct blockHeader *start_header = (struct blockHeader *)heap;
start_header->size = heap_size;
start_header->allocated = 0;


// prepare heap for allocation



return 0;

}

void* mm_malloc(size_t size) {
// Allocate a payload of size bytes. 
// Return a valid aligned pointer or NULL if the request cannot be satisfied safely. 


}

int mm_read(void *ptr, size_t offset, void *buf, size_t len) {
// Read len bytes beginning at offset within an allocated payload. 
//Return the number of bytes read, or 0 if the pointer, range or 
// allocation is invalid or corrupted. 



}

int mm_write(void *ptr, size_t offset, const void *src, size_t len) {
// Write len bytes beginning at offset within an allocated payload. 
// Return the number of bytes written, or 0 if the pointer, range or 
// allocation is invalid or corrupted. 


}

void mm_free(void *ptr) {
//Release a valid allocation. Invalid frees must be handled safely.


}