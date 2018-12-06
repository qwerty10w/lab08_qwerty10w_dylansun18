#include <iostream>
#include <string>
#include "tddFuncs.h"
#include "strFuncs.h"

int main(){
	assertEquals(true, isPalindrome("racecar"),"hi");
	assertEquals(false, isPalindrome("raceca"),"raceca");
	assertEquals(true, isPalindrome("a"),"a");
	assertEquals(true, isAnagram("aaat","TAAA"),"aaat, TAAA");
}

