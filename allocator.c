#include <allocator.h>
#include <stdint.h>

// globals 
uint8_t *heap_start;
size_t total_heap_size;




int mm_init(uint8_t *heap, size_t heap_size) {
// Initialise the allocator over the supplied memory region. 
// Returns 0 on success and non-zero on failure. 
// unit8_t = data type: unsigned int of eaxctly 8 bits
// *heap = declared pointer that stores address of a heap (created in testharness.c)


// remember where the heap start and its size (parameters)
heap_start = heap;
total_heap_size = heap_size;

// detect the reccuring 5-byte pattern - so can fill with this after freeing memory 
int repeating_pattern[] = {0,0,0,0,0};
for (int i = 0; i < 5; i++) {
	repeating_pattern[i] = *(heap + i);
};

// set up memory-management metadata (how will it keep track of which blocks 
	// are gree, which are allocated, how large each is, where each starts + ends),


// prepare heap for allocation







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