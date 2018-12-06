strFuncs: strFuncs.cpp
	g++ strFuncs.cpp -c
tddFuncs: tddFuncs.cpp
	g++ tddFuncs.cpp -c
tests: tests.cpp
	g++ tests.cpp -c
maketests: strFuncs.o tddFuncs.o tests.o
	g++ strFuncs.o tddFuncs.o tests.o -o testfile
