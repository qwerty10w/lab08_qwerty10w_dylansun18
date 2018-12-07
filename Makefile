strFuncs: strFuncs.cpp
	g++ strFuncs.cpp -c
recLLFuncs: recLinkedListFuncs.cpp
	g++ recLinkedListFuncs.cpp -c
tddFuncs: tddFuncs.cpp
	g++ tddFuncs.cpp -c
tests: tests.cpp
	g++ tests.cpp -c
maketests: strFuncs.o recLinkedListFuncs.o tddFuncs.o tests.o
	g++ strFuncs.o recLinkedListFuncs.o tddFuncs.o tests.o -o testfile
