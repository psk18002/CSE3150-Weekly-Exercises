CC = c++
CFLAGS= -g -I. -std=c++14
LFLAGS= -g
OFILES= WE9_main.o WE9.o
TEST_OFILES= WE9_test.o WE9.o

all: WE9 TEST

WE9: $(OFILES)
		$(CC) $(CFLAGS) $(OFILES) -o WE9_main

TEST: $(TEST_OFILES)
		$(CC) $(CFLAGS) $(TEST_OFILES) -o WE9_test

WE9_test.o : WE9_test.cpp WE9.h
		$(CC) -c $(CFLAGS) $<

WE9.o: WE9.cpp WE9.h
		$(CC) -c $(CFLAGS) $<

WE9_main.o : WE9_main.cpp
		$(CC) -c $(CFLAGS) $<

main: WE9
		./WE9_main

test: TEST
		./WE9_test

clean:
		rm -rf *.o *~