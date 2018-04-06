BIN="exe"
LIB="antlr4-cpp-runtime-4/lib/libantlr4-runtime.a"
RUNTIME=-I "antlr4-cpp-runtime-4/antlr4-runtime/"
OS = $(shell uname)

default: adapt
	@cp src/executables/main.cpp src/
	@echo Executing clang command...
	@clang++ -std=c++11 $(RUNTIME) -o exe src/*.cpp $(LIB)
	@rm -f src/main.cpp
	@./exe

testback: 
	@cp src/executables/testback.cpp src/
	@echo Executing clang command...
	@clang++ -std=c++11 $(RUNTIME) -o exe src/*.cpp $(LIB)
	@rm -f src/testback.cpp
	@./exe

testfront: 
	@cp src/executables/testfront.cpp src/
	@echo Executing clang command...
	@clang++ -std=c++11 $(RUNTIME) -o exe src/*.cpp $(LIB)
	@rm -f src/testfront.cpp
	@./exe

testfile: 
	@cp src/executables/testfile.cpp src/
	@echo Executing clang command...
	@clang++ -std=c++11 $(RUNTIME) -o exe src/*.cpp $(LIB)
	@rm -f src/testfile.cpp
	@./exe
	@as -o testfile.o testfile.s
	@gcc -o testfile testfile.o 
	@echo Executing assembler file...
	@./testfile || true
	@rm -rf testfile

adapt:
	$(if $(filter $(OS),Darwin),@echo Adapting code to MacOS...,@echo Adapting code to Linux...)
	$(if $(filter $(OS),Darwin),@yes | cp -rf ./src/executables/mac/. src/,@yes | cp -rf ./src/executables/linux/. src/)

clean:
	rm -f ./src/*.o
	rm -f *.o
	rm $(BIN)

grammar:
	antlr4 -visitor -no-listener -Dlanguage=Cpp src/PLDCOMP.g4