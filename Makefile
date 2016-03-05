CC=g++
CFLAGS=-Wall -pedantic -Werror -std=c++0x

all: test

test: test.o linked_list.o; $(CC) $(CFLAGS) test.o linked_list.o -o test

test.o: test.cpp; $(CC) $(CFLAGS) -c test.cpp

linked_list.o: linked_list.cpp; $(CC) $(CFLAGS) -c linked_list.cpp

clean: ; rm *.o test
