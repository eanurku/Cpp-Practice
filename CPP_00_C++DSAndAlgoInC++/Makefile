clean:
	-del -f *.exe
	
all:  test  01_ArrayClass 02_ArrayClassImproved 03_ArrayCopyConstructor 04_ArrayCopyAssignment 05_ArrayMoveConstructor 06_ArrayClassTemplate

test: test.cpp
	g++ -o test test.cpp

01_ArrayClass: 01_ArrayClass.cpp
	g++ -o 01_ArrayClass 01_ArrayClass.cpp

02_ArrayClassImproved: 02_ArrayClassImproved.cpp
	g++ -o 02_ArrayClassImproved 02_ArrayClassImproved.cpp

03_ArrayCopyConstructor: 03_ArrayCopyConstructor.cpp
	g++ -o 03_ArrayCopyConstructor 03_ArrayCopyConstructor.cpp

04_ArrayCopyAssignment: 04_ArrayCopyAssignment.cpp
	g++ -o 04_ArrayCopyAssignment 04_ArrayCopyAssignment.cpp

05_ArrayMoveConstructor: 05_ArrayMoveConstructor.cpp
	g++ -o 05_ArrayMoveConstructor 05_ArrayMoveConstructor.cpp
	
06_ArrayClassTemplate: 06_ArrayClassTemplate.cpp
	g++ -o 06_ArrayClassTemplate 06_ArrayClassTemplate.cpp