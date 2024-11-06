CXX = g++
GTEST_LIBS = -lgtest -lgtest_main -lpthread
CXX_FLAGS = -Iinclude
PAPKA = src
PROJ_FILES = $(wildcard $(PAPKA)/*.cpp)
OBJ_FILES = $(PROJ_FILES:.cpp=.o)
TEST_PAPKA = gtest
TEST_FILES = $(wildcard $(TEST_PAPKA)/*.cpp)
TEST_OBJ_FILES = $(TEST_FILES:.cpp=.o)
assignment3: $(OBJ_FILES) $(TEST_OBJ_FILES)
	$(CXX) $(CXX_FLAGS) $(TEST_OBJ_FILES) $(OBJ_FILES) $(GTEST_LIBS) -o assignment3
$(PAPKA)/%.o: $(PAPKA)/%.cpp
	$(CXX) $(CXX_FLAGS) -c $< -o $@
$(TEST_PAPKA)/%.o: $(TEST_PAPKA)/%.cpp
	$(CXX) $(CXX_FLAGS) -c $< -o $@
clean:
	rm -f $(TEST_PAPKA)/*.o $(PAPKA)/*.o
cleanall:
	rm -f $(TEST_PAPKA)/*.o $(PAPKA)/*.o assignment3
