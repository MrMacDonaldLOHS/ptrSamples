all:simplePtrs simpleArrayPtrs arrayAllocExamples readlineExample 

simplePtrs: simplePtrs.cpp
	g++ -Wall -g simplePtrs.cpp -o simplePtrs

simpleArrayPtrs: simpleArrayPtrs.cpp
	g++ -Wall -g simpleArrayPtrs.cpp -o simpleArrayPtrs

arrayAllocExamples: arrayAllocExamples.cpp
	g++ -Wall -g arrayAllocExamples.cpp -o arrayAllocExamples

readlineExample: readlineExample.cpp
	g++ -Wall -g readlineExample.cpp -o readlineExample
