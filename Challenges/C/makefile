ex0: ex0.c
	gcc -v ex0.c -o ex0

ex1: ex1.c
	gcc -v ex1.c -o ex1

ex2: ex2.c
	gcc -v ex2.c -o ex2

ex3: ex3.c
	gcc -v ex3.c -o ex3

ex4: ex4.c
	gcc -v ex4.c -o ex4

ex5: ex5.c
	gcc -v ex5.c -o ex5

ex6: ex6.c
	gcc -v ex6.c -o ex6

ex7: ex7.c
	gcc -v ex7.c -o ex7 -lcrypto

ex8: ex8.c
	gcc -v ex8.c -o ex8

ex9: ex9.c
	gcc -v ex9.c -o ex9
	strip ex9

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
	mkdir ~/RE_Challenges/Help/C/Source-Code
	mv *.c ~/RE_Challenges/Help/C/Source-Code
	mv makefile ~/RE_Challenges/Help/C/Source-Code
