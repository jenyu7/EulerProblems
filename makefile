all: E1.c
	gcc  -o E1.c E1
run: all
	./E1
clean:
	rm -f *~ E1
