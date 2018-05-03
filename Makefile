CFLAGS = -Wall -Werror 
OBJ = g++ -c $< -o $@ $(CFLAGS)

.PHONY: clean
all:bin build bin/chessviz.exe 
bin/chessviz.exe:  build/main.o build/boardprint.o build/board.o build/boardread.o
	g++ $^ -o $@ $(CFLAGS)

build/boardprint.o: src/boardprint.cpp src/boardprint.h
	$(OBJ)

build/boardread.o: src/boardread.cpp src/boardread.h
	$(OBJ)

build/board.o: src/board.cpp src/board.h
	$(OBJ)

build/main.o: src/main.cpp
	$(OBJ)


bin: 
	mkdir bin
build:
	mkdir build

clean:
	rm build/*.o
	rm bin/*.exe
