CC = c++
CFLAGS= -g -I. -std=c++14
LFLAGS= -g
OFILES= WE10_main.o WE10.o
TEST_OFILES= WE10_test.o WE10.o

all: WE10 TEST

WE10: $(OFILES)
		$(CC) $(CFLAGS) $(OFILES) -o WE10_main

TEST: $(TEST_OFILES)
		$(CC) $(CFLAGS) $(TEST_OFILES) -o WE10_test

WE10_test.o : WE10_test.cpp WE10.h
		$(CC) -c $(CFLAGS) $<

WE10.o: WE10.cpp WE10.h
		$(CC) -c $(CFLAGS) $<

WE10_main.o : WE10_main.cpp 
		$(CC) -c $(CFLAGS) $<

main: WE10
		./WE10_main

test: TEST
		./WE10_test

clean:
		rm -rf *.o *~