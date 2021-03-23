#all:
#	g++  main.cpp
	#g++ -c main.cpp -o main.o

PROG=main

#TODO std c++11 17
CXXFLAGS= -g
obj= voiture.o $(PROG).o


all:
	g++ -c $(CXXFLAGS) voiture.cpp
	g++ -c $(CXXFLAGS) main.cpp 
	g++ $(obj) -o $(PROG)

#all: $(obj)
#	g++ $(obj) -o $(PROG)
#.cpp.o:
#	g++ -c $(CXXFLAGS) $<





clean:
	rm -f $(PROG) $(obj)


#-S https://www.geeksforgeeks.org/compiling-with-g-plus-plus/
