clean:
	-del -f *.exe
	
all:  test 01_AutoVariables 02_TypeCasting 03_CustomClass 04_TemplateFunction 05_TemplateClass 06_References 07_Pointers 08_NewOperator 09_PolymorphismUsingVirtualFunctions 10_BaseClassDestructorAsVirtualFunction 11_Slicing 12_StaticCasting 13_DynamicCasting


test: test.cpp
	g++ -o test test.cpp

01_AutoVariables: 01_AutoVariables.cpp
	g++ -o 01_AutoVariables 01_AutoVariables.cpp

02_TypeCasting: 02_TypeCasting.cpp
	g++ -o 02_TypeCasting 02_TypeCasting.cpp

03_CustomClass: 03_CustomClass.cpp
	g++ -o 03_CustomClass 03_CustomClass.cpp person.cpp
	
04_TemplateFunction: 04_TemplateFunction.cpp
	g++ -o 04_TemplateFunction 04_TemplateFunction.cpp
	
05_TemplateClass: 05_TemplateClass.cpp
	g++ -o 05_TemplateClass 05_TemplateClass.cpp
	
06_References: 06_References.cpp
	g++ -o 06_References 06_References.cpp
	
07_Pointers: 07_Pointers.cpp
	g++ -o 07_Pointers 07_Pointers.cpp
	
08_NewOperator: 08_NewOperator.cpp
	g++ -o 08_NewOperator 08_NewOperator.cpp person.cpp

09_PolymorphismUsingVirtualFunctions: 09_PolymorphismUsingVirtualFunctions.cpp
	g++ -o 09_PolymorphismUsingVirtualFunctions 09_PolymorphismUsingVirtualFunctions.cpp twitter.cpp person.cpp
	
10_BaseClassDestructorAsVirtualFunction: 10_BaseClassDestructorAsVirtualFunction.cpp
	g++ -o 10_BaseClassDestructorAsVirtualFunction 10_BaseClassDestructorAsVirtualFunction.cpp twitter.cpp person.cpp
	
11_Slicing: 11_Slicing.cpp
	g++ -o 11_Slicing 11_Slicing.cpp twitter.cpp person.cpp
	
12_StaticCasting: 12_StaticCasting.cpp
	g++ -o 12_StaticCasting 12_StaticCasting.cpp twitter.cpp person.cpp
	
13_DynamicCasting: 13_DynamicCasting.cpp
	g++ -o 13_DynamicCasting 13_DynamicCasting.cpp twitter.cpp person.cpp resource.cpp