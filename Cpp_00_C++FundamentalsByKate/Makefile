clean:
	-del -f *.exe
	
all:  test 01_AutoVariables 02_TypeCasting 03_CustomClass 04_TemplateFunction 05_TemplateClass 06_References 07_Pointers 08_NewOperator

test: test.cpp
	g++ -o test test.cpp

01_AutoVariables: 01_AutoVariables.cpp
	g++ -o 01_AutoVariables 01_AutoVariables.cpp

02_TypeCasting: 02_TypeCasting.cpp
	g++ -o 02_TypeCasting 02_TypeCasting.cpp

03_CustomClass: 03_CustomClass.cpp
	g++ -o 03_CustomClass 03_CustomClass.cpp person.cpp person.h
04_TemplateFunction: 04_TemplateFunction.cpp
	g++ -o 04_TemplateFunction 04_TemplateFunction.cpp
05_TemplateClass: 05_TemplateClass.cpp
	g++ -o 05_TemplateClass 05_TemplateClass.cpp
06_References: 06_References.cpp
	g++ -o 06_References 06_References.cpp
07_Pointers: 07_Pointers.cpp
	g++ -o 07_Pointers 07_Pointers.cpp
08_NewOperator: 08_NewOperator.cpp
	g++ -o 08_NewOperator 08_NewOperator.cpp person.cpp person.h