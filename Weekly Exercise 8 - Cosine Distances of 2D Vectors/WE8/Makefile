CC = c++
CFLAGS= -g -I. -std=c++14
LFLAGS= -g
OFILES= WE8_main.o WE8.o
TEST_OFILES= WE8_test.o WE8.o

all: WE8 TEST

WE8: $(OFILES)
		$(CC) $(CFLAGS) $(OFILES) -o WE8_main

TEST: $(TEST_OFILES)
		$(CC) $(CFLAGS) $(TEST_OFILES) -o WE8_test

WE8_test.o : WE8_test.cpp WE8.h
		$(CC) -c $(CFLAGS) $<

WE8.o: WE8.cpp WE8.h
		$(CC) -c $(CFLAGS) $<

WE8_main.o : WE8_main.cpp
		$(CC) -c $(CFLAGS) $<

main: WE8
		./WE8_main

test: TEST
		./WE8_test

clean:
		rm -rf *.o *~