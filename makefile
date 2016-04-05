lab3a:lab3a_main.o lab3a.o
	g++ -o lab3a_main lab3a_main.o lab3a.o
lab3a_main:lab3a_main.cpp lab3a.h
	g++ -c lab3a_main.cpp
lab3a.o:lab3a.cpp lab3a.h
	g++ -c lab3a.cpp

lab3b:lab3b_main.o lab3b.o
	g++ -o lab3b_main lab3b_main.o lab3b.o
lab3b_main:lab3b_main.cpp lab3b.h
	g++ -c lab3b_main.cpp
lab3b.o:lab3b.cpp lab3b.h
	g++ -c lab3b.cpp
