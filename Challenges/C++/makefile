ex0: ex0.cpp
	g++ ex0.cpp -o ex0
	
ex1: ex1.cpp
	g++ ex1.cpp -o ex1
	
ex2: ex2.cpp
	g++ ex2.cpp -o ex2
	
ex3: ex3.cpp
	g++ ex3.cpp -o ex3
	
ex4: ex4.cpp
	g++ ex4.cpp -o ex4
	
ex5: ex5.cpp
	x86_64-w64-mingw32-g++ -static ex5.cpp -o ex5
	
ex6: ex6.cpp
	x86_64-w64-mingw32-g++ -static -s ex6.cpp -o ex6

ex7: ex7.cpp
	g++ ex7.cpp -o ex7

ex8: ex8.cpp
	g++ -static -s ex8.cpp -o ex8
	upx --best ex8

ex9: ex9.cpp
	g++ -O3 -static ex9.cpp -o ex9

all:
	make ex0
	make ex1
	make ex2
	make ex3
	make ex4
	make ex5
	make ex6
	make ex7
	make ex8
	make ex9

install:
	make all
	mkdir ~/RE_Challenges/Help/C++/Source-Code
	mv *.cpp ~/RE_Challenges/Help/C++/Source-Code
	mv makefile ~/RE_Challenges/Help/C++/Source-Code
