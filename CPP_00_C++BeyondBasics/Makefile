clean:
	-del -f *.exe
	
all:  test 01_LambdaCalledWithArguments 02_LambdaAsTinyFunctions 03_LambdaCaptureByValue 04_lambdaCaptureByReference 05_LambdaReturnType 06_ExceptionTryAndCatchBlock 07_ExceptionUnwindingStack

test: test.cpp
	g++ -o test test.cpp

01_LambdaCalledWithArguments: 01_LambdaCalledWithArguments.cpp
	g++ -o 01_LambdaCalledWithArguments 01_LambdaCalledWithArguments.cpp
	
02_LambdaAsTinyFunctions: 02_LambdaAsTinyFunctions.cpp
	g++ -o 02_LambdaAsTinyFunctions 02_LambdaAsTinyFunctions.cpp

03_LambdaCaptureByValue: 03_LambdaCaptureByValue.cpp
	g++ -o 03_LambdaCaptureByValue 03_LambdaCaptureByValue.cpp

04_lambdaCaptureByReference: 04_lambdaCaptureByReference.cpp
	g++ -o 04_lambdaCaptureByReference 04_lambdaCaptureByReference.cpp

05_LambdaReturnType: 05_LambdaReturnType.cpp
	g++ -o 05_LambdaReturnType 05_LambdaReturnType.cpp

06_ExceptionTryAndCatchBlock: 06_ExceptionTryAndCatchBlock.cpp
	g++ -o 06_ExceptionTryAndCatchBlock 06_ExceptionTryAndCatchBlock.cpp

07_ExceptionUnwindingStack: 07_ExceptionUnwindingStack.cpp
	g++ -o 07_ExceptionUnwindingStack 07_ExceptionUnwindingStack.cpp person.cpp
