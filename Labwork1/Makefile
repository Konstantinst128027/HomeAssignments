CXX = g++
CXXFLAGS = -Werror -Wpedantic -Wall
PROJ_FILES = $(wildcard *.cpp)
OBJ_FILES = $(PROJ_FILES:.cpp = .o)
EXECUTABLE = Labwork1
$(EXECUTABLE): $(OBJ_FILES) 
	$(CXX) $(CXXFLAGS) $(OBJ_FILES) -o $(EXECUTABLE)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f *.o
cleanall:
	rm -f *.o  $(EXECUTABLE)
