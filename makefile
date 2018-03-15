exe:*.cpp
	clang++ -std=c++11 -I ~/Desktop/PLD\ COMP\ 2/antlr4-cpp-runtime-4/antlr4-runtime/ -o exe *.cpp

clean:
	rm -rf *.o
