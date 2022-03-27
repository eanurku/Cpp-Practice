clean:
	-del -f *.exe
	
all:  test  01_ArrayClass 02_ArrayClassImproved 03_ArrayCopyConstructor 04_ArrayCopyAssignment

test: 01_ArrayClass.cpp
	g++ -o 01_ArrayClass 01_ArrayClass.cpp

02_ArrayClassImproved: 02_ArrayClassImproved.cpp
	g++ -o 02_ArrayClassImproved 02_ArrayClassImproved.cpp

03_ArrayCopyConstructor: 03_ArrayCopyConstructor.cpp
	g++ -o 03_ArrayCopyConstructor 03_ArrayCopyConstructor.cpp
	
04_ArrayCopyAssignment: 04_ArrayCopyAssignment.cpp
	g++ -o 04_ArrayCopyAssignment 04_ArrayCopyAssignment.cpp
	
	
test: test.cpp
	g++ -o test test.cpp