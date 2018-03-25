#Makefile
CXX = g++


main: main.o count_letters.o output_letters.o
	${CXX} main.o count_letters.o output_letters.o -o main

main.o: main.cpp
	${CXX} -c main.cpp

count_letters.o: count_letters.cpp count_letters.hpp
	${CXX} -c count_letters.cpp

output_letters.o: output_letters.cpp output_letters.hpp
	${CXX} -c output_letters.cpp

clean:
	rm *.o main

