clean:
	-del -f *.exe
	
all:  test 01_AutoVariables 02_TypeCasting 03_CustomClass

test: test.cpp
	g++ -o test test.cpp

01_AutoVariables: 01_AutoVariables.cpp
	g++ -o 01_AutoVariables 01_AutoVariables.cpp

02_TypeCasting: 02_TypeCasting.cpp
	g++ -o 02_TypeCasting 02_TypeCasting.cpp

03_CustomClass: 03_CustomClass.cpp
	g++ -o 03_CustomClass 03_CustomClass.cpp person.cpp person.h