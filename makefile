prog: main.o destination.o ListMyJosephus.o VectorMyJosephus.o TestListMyJosephus.o TestVectorMyJosephus.o
	g++ -g main.o destination.o ListMyJosephus.o VectorMyJosephus.o TestListMyJosephus.o TestVectorMyJosephus.o -o EXE

main.o: main.cpp destination.cpp destination.hpp ListMyJosephus.cpp ListMyJosephus.hpp VectorMyJosephus.cpp VectorMyJosephus.hpp TestListMyJosephus.cpp TestListMyJosephus.hpp TestVectorMyJosephus.cpp TestVectorMyJosephus.hpp
	g++ -c -g -std=c++11 -Wall main.cpp

destination.o: destination.cpp destination.hpp
	g++ -c -g -std=c++11 -Wall destination.cpp

ListMyJosephus.o: ListMyJosephus.cpp ListMyJosephus.hpp
	g++ -c -g -std=c++11 -Wall ListMyJosephus.cpp

VectorMyJosephus.o: VectorMyJosephus.cpp VectorMyJosephus.hpp
	g++ -c -g -std=c++11 -Wall VectorMyJosephus.cpp

TestListMyJosephus.o: TestListMyJosephus.cpp TestListMyJosephus.hpp
	g++ -c -g -std=c++11 -Wall TestListMyJosephus.cpp

TestVectorMyJosephus.o: TestVectorMyJosephus.cpp TestVectorMyJosephus.hpp
	g++ -c -g -std=c++11 -Wall TestVectorMyJosephus.cpp

clean:
	rm *.o

run:
	@./EXE