CC = c++
CFLAGS= -g -I. -std=c++14
LFLAGS= -g
OFILES= WE7_main.o WE7.o
TEST_OFILES= WE7_test.o WE7.o

all: WE7 TEST

WE7: $(OFILES)
		$(CC) $(CFLAGS) $(OFILES) -o WE7_main

TEST: $(TEST_OFILES)
		$(CC) $(CFLAGS) $(TEST_OFILES) -o WE7_test

WE7_test.o : WE7_test.cpp WE7.h
		$(CC) -c $(CFLAGS) $<

WE7.o: WE7.cpp WE7.h
		$(CC) -c $(CFLAGS) $<

WE7_main.o : WE7_main.cpp
		$(CC) -c $(CFLAGS) $<

main: WE7
		./WE7_main

test: TEST
		./WE7_test

clean:
		rm -rf *.o *~