CXX = g++
CXXFLAGS = -Werror -Wpedantic -Wall
PROJ_FILES = $(wildcard *.cpp)
OBJ_FILES = $(PROJ_FILES:.cpp=.o)
EXELENT = assignment5
assignment5: $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) $(OBJ_FILES) -o $(EXELENT)
$(OBJ_FILES): %.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f *.o
cleanall:
	rm -f *.o $(EXELENT)

