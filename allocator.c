#include <allocator.h>

int mm_init(uint8_t *head, size_t heap_size) {
// Initialise the allocator over the supplied memory region. 
//Returns 0 on success and non-zero on failure. 


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