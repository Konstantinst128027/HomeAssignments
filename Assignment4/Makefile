CXX = g++
CXXFLAGS = -Werror -Wpedantic -Wall
CXX_FLAG = -Iinclude
GTEST_LIBS = -lgtest -lgtest_main -lpthread
PAPKA = src
PROJ_FILES = $(wildcard $(PAPKA)/*.cpp)
OBJ_FILES = $(PROJ_FILES:.cpp=.o)
TEST_PAPKA = gtest
TEST_FILES = $(wildcard $(TEST_PAPKA)/*.cpp)
TEST_OBJ_FILES = $(TEST_FILES:.cpp=.o)
EXECUTABLE = assignment4
$(EXECUTABLE): $(OBJ_FILES) $(TEST_OBJ_FILES)
	$(CXX) $(CXXFLAGS) $(CXX_FLAG) $(TEST_OBJ_FILES) $(OBJ_FILES) $(GTEST_LIBS) -o $(EXECUTABLE)
$(PAPKA)/%.o: $(PAPKA)/%.cpp
	$(CXX) $(CXXFLAGS) $(CXX_FLAG) -c $< -o $@
$(TEST_PAPKA)/%.o: $(TEST_PAPKA)/%.cpp
	$(CXX) $(CXXFLAGS) $(CXX_FLAG) -c $< -o $@
clean:
	rm -f $(TEST_PAPKA)/*.o $(PAPKA)/*.o
cleanall:
	rm -f $(TEST_PAPKA)/*.o $(PAPKA)/*.o $(EXECUTABLE)
