lab3a:lab3a_main.o lab3a.o
	g++ -o lab3a_main lab3a_main.o lab3a.o
lab3a_main:lab3a_main.cpp lab3a.h
	g++ -c lab3a_main.cpp
lab3a.o:lab3a.cpp lab3a.h
	g++ -c lab3a.cpp
