CXX = g++
GTEST_LIBS = -lgtest -lpthread
PROJ_FILES = $(wildcard *.cpp)
OBJ_FILES = $(PROJ_FILES:.cpp=.o)
TEST_PAPKA = gtests
TEST_FILES = $(wildcard $(TEST_PAPKA)/*.cpp)
TEST_OBJ_FILES = $(TEST_FILES:.cpp=.o)
all: assignment3 tests
assignment3: $(OBJ_FILES)
	$(CXX) -o assignment3 $(OBJ_FILES)
%.o: %.cpp
	$(CXX)  -c $< -o $@
tests: $(TEST_OBJ_FILES) $(OBJ_FILES)
	$(CXX) -o tests $(TEST_OBJ_FILES) $(OBJ_FILES) $(GTEST_LIBS)
$(TEST_PAPKA)/%.o: $(TEST_PAPKA)/%.cpp
	$(CXX) -c $< -o $@
clean:
	rm -f $(TEST_PAPKA)/*.o *.o
cleanall:
	rm -f $(TEST_DIR)/*.o *.o assignment3 tests
