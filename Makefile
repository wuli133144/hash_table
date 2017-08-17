src=main.c hash.h hash.c
hash:$(src)
	gcc  -g -o $@ $^
	./hash	

