CC = c++
CFLAGS= -g -I. -std=c++14
LFLAGS= -g
OFILES= WE5.o WE5_main.o
TEST_OFILES= WE5.o WE5_test.o

all: WE5 TEST

WE5: $(OFILES)
		$(CC) $(CFLAGS) $(OFILES) -o WE5_main

TEST: $(TEST_OFILES)
		$(CC) $(CFLAGS) $(TEST_OFILES) -o WE5_test

WE5_test.o : WE5_test.cpp WE5.h
		$(CC) -c $(CFLAGS) $<

WE5.o : WE5.cpp WE5.h
		$(CC) -c $(CFLAGS) $<

WE5_main.o : WE5_main.cpp
		$(CC) -c $(CFLAGS) $<

main: WE5
		./WE5_main

test: TEST
		./WE5_test


clean:
		rm -rf *.o *~