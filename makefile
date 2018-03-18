exe:*.cpp
	clang++ -std=c++11 -I antlr4-cpp-runtime-4/antlr4-runtime/ -o exe *.cpp

clean:
	rm -rf *.o
