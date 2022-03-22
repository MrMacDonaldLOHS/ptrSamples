all:simplePtrs simpleArrayPtrs arrayAllocExamples readlineExample classWithPtrs ptrsToClass

simplePtrs: simplePtrs.cpp
	g++ -Wall -g simplePtrs.cpp -o simplePtrs

simpleArrayPtrs: simpleArrayPtrs.cpp
	g++ -Wall -g simpleArrayPtrs.cpp -o simpleArrayPtrs

arrayAllocExamples: arrayAllocExamples.cpp
	g++ -Wall -g arrayAllocExamples.cpp -o arrayAllocExamples

readlineExample: readlineExample.cpp
	g++ -Wall -g readlineExample.cpp -o readlineExample

ptrsToClass: classWithPtrs.o ptrsToClass.o
	g++ -Wall -g classWithPtrs.cpp ptrsToClass.o -o ptrsToClass

classWithPtrs: classWithPtrs.o classWithPtrsClient.o
	g++ -Wall -g classWithPtrs.cpp classWithPtrsClient.o -o classWithPtrs

classWithPtrs.o: classWithPtrs.cpp
	g++ -Wall -g -c classWithPtrs.cpp -o classWithPtrs.o

ptrsToClass.o: ptrsToClass.cpp
	g++ -Wall -g -c ptrsToClass.cpp -o ptrsToClass.o

classWithPtrsClient.o: classWithPtrsClient.cpp
	g++ -Wall -g -c classWithPtrsClient.cpp -o classWithPtrsClient.o
