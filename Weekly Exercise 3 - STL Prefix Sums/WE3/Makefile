#COMPILER
CC = g++

#EXECUTABLE NAMES
EXEC = stl_prefix_sum
TEST_EXEC = test_stl_prefix_sum

#SOURCE FILES
HEADER = stl.h
TEST_HEADER = doctest.h
STL_FUNC_SRC = stl.cpp
MAIN_SRC = main_stl.cpp
TEST_SRC = test_stl.cpp

#MAIN EXECUTABLE BUILD
$(EXEC): $(MAIN_SRC) $(STL_FUNC_SRC) $(HEADER)
	$(CC) $(MAIN_SRC) $(STL_FUNC_SRC) -o $(EXEC)

#TEST EXECUTABLE BUILD
$(TEST_EXEC) : $(TEST_SRC) $(STL_FUNC_SRC) $(HEADER) $(TEST_HEADER)
	$(CC) $(TEST_SRC) $(STL_FUNC_SRC) -o $(TEST_EXEC)

#RUN TEST
test: $(TEST_EXEC)
	./$(TEST_EXEC)
#CLEAN
clean:
	rm -f $(EXEC) $(TEST_EXEC)