CXX = g++
GTEST_LIBS = -lgtest -lgtest_main -lpthread
PROJ_FILES = $(wildcard *.cpp)
OBJ_FILES = $(PROJ_FILES:.cpp=.o)
assignment6: $(OBJ_FILES)
	$(CXX) $(OBJ_FILES) $(GTEST_LIBS) -o assignment6
%.o: %.cpp
	$(CXX) -c $< -o $@
%.o: %.cppc
	$(CXX) -c $< -o $@
clean:
	rm -f *.o
cleanall:
	rm -f *.o assignment6
