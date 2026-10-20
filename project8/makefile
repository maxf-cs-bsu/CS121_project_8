studentData: main.o address.o date.o
	g++ -g main.o address.o date.o -o studentData

main.o: main.cpp address.h date.h
	g++ -g -c main.cpp

address.o: address.cpp address.h
	g++ -g -c address.cpp

date.o: date.cpp date.h
	g++ -g -c date.cpp

run: studentData
	./studentData

clean:
	rm studentData
	rm *.o

debug: studentData
	gdb studentData
