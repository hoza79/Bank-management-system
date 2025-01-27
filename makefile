run: main.o Bank.o Account.o 
	clang++ -std=c++17 main.o Account.o Bank.o -o run

main.o: main.cpp 
	clang++ -std=c++17 -c main.cpp

Bank.o: Bank.cpp Bank.hpp
	clang++ -std=c++17 -c Bank.cpp

Account.o: Account.cpp Account.hpp
	clang++ -std=c++17 -c Account.cpp

clean: 
	rm *.o run

