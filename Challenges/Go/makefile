ex0: ex0.go
	gccgo ex0.go -o ex0
	
ex1: ex1.go
	gccgo ex1.go -o ex1
	
ex2: ex2.go
	gccgo ex2.go -o ex2
	
ex3: ex3.go
	gccgo ex3.go -o ex3
	
all:
	make ex0
	make ex1
	make ex2
	make ex3

install:
	make all
	mkdir ~/RE_Challenges/Help/Go/Source-Code
	mv *.go ~/RE_Challenges/Help/Go/Source-Code
	mv makefile ~/RE_Challenges/Help/Go/Source-Code
