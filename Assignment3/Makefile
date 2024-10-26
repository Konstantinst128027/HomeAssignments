CXX = g++
GTEST_LIBS = -lgtest -lgtest_main -lpthread
PROJ_FILES = $(wildcard *.cpp)
OBJ_FILES = $(PROJ_FILES:.cpp=.o)
TEST_PAPKA = gtest
TEST_FILES = $(wildcard $(TEST_PAPKA)/*.cpp)
TEST_OBJ_FILES = $(TEST_FILES:.cpp=.o)
assignment3: $(OBJ_FILES) $(TEST_OBJ_FILES)
	$(CXX) $(TEST_OBJ_FILES) $(OBJ_FILES) $(GTEST_LIBS) -o assignment3
%.o: %.cpp
	$(CXX)  -c $< -o $@
$(TEST_PAPKA)/%.o: $(TEST_PAPKA)/%.cpp
	$(CXX) -c $< -o $@
clean:
	rm -f $(TEST_PAPKA)/*.o *.o
cleanall:
	rm -f $(TEST_PAPKA)/*.o *.o assignment3
