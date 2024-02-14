clean:
	-del -f *.exe
	
all:  test hello

test: test.cpp
	g++ -o test test.cpp

hello:  hello.cpp Account.cpp
	g++ -o hello hello.cpp  Account.cpp
	
