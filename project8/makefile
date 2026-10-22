studentData: main.o address.o date.o student.o
	g++ -g main.o address.o date.o student.o -o studentData

main.o: main.cpp address.h date.h student.h
	g++ -g -c main.cpp

address.o: address.cpp address.h
	g++ -g -c address.cpp

date.o: date.cpp date.h
	g++ -g -c date.cpp

student.o: student.cpp student.h
	g++ -g -c student.cpp

run: studentData
	./studentData

clean:
	rm studentData
	rm *.o

debug: studentData
	gdb studentData

valgrind: studentData
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./studentData
