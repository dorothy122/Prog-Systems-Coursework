DEPS = allocator.h
OBJS = allocator.o

program: $(OBJS)
	gcc $^ -o $@

allocator.o: allocator.c $(DEPS)
	gcc -c $< -o $@

clean: 
	rm -f program $(OBJS)

