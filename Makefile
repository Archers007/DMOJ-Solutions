CXX = clang++
override CXXFLAGS += -g -Wno-everything

SRCS = $(shell find . -name '.ccls-cache' -type d -prune -o -type f -name 'workingFile.cpp' -print)
OBJS = $(patsubst workingFile.cpp, %.o, $(SRCS))

main: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o main

clean:
	rm -f $(OBJS) main