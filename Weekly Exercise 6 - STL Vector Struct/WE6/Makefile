CC = c++
CFLAGS= -g -I. -std=c++14
LFLAGS= -g
OFILES= WE6_main.o WE6.o
TEST_OFILES= WE6_test.o WE6.o

all: WE6 TEST

WE6: $(OFILES)
		$(CC) $(CFLAGS) $(OFILES) -o WE6_main

TEST: $(TEST_OFILES)
		$(CC) $(CFLAGS) $(TEST_OFILES) -o WE6_test

WE6_test.o : WE6_test.cpp WE6.h
		$(CC) -c $(CFLAGS) $<

WE6.o: WE6.cpp WE6.h
		$(CC) -c $(CFLAGS) $<

WE6_main.o : WE6_main.cpp
		$(CC) -c $(CFLAGS) $<

main: WE6
		./WE6_main

test: TEST
		./WE6_test

clean:
		rm -rf *.o *~