clean:
	-del -f *.exe
	
all:  test 01_DiffTime 02_ChronoDiffTime

test: test.cpp
	g++ -o test test.cpp

01_DiffTime: 01_DiffTime.cpp
	g++ -o 01_DiffTime 01_DiffTime.cpp

02_ChronoDiffTime: 02_ChronoDiffTime.cpp
	g++ -o 02_ChronoDiffTime 02_ChronoDiffTime.cpp
