#include <iostream>
#include <string>
#include "tddFuncs.h"
#include "strFuncs.h"
#include "recLinkedListFuncs.h"
#include "linkedList.h"

int main(){
	assertEquals(true, isPalindrome("racecar"),"racecar, true");
	assertEquals(true, isPalindrome("a"),"a, true");
	assertEquals(true, isPalindrome("RaCeCar"), "RaCeCar, true");
	assertEquals(false, isPalindrome("raceca"),"raceca, false");
	assertEquals(false, isPalindrome("plAte"), "plate, false");

	assertEquals(true, isAnagram("aaat","TAAA"),"aaat, TAAA, true");
	assertEquals(true, isAnagram("thE suN risEs", "hirsuteness"), "thE suN risEs, hirsuteness, true");
	assertEquals(true, isAnagram("Eleven plus two", "Twelve plus one"), "Eleven plus two, Twelve plus one, true");
	assertEquals(true, isAnagram("Rats and Mice", "in cat's dream"), "Rats and Mice, in cat's dream, true");
	assertEquals(false, isAnagram("aabb", "bbba"), "aabb, bbaa, false");
	assertEquals(false, isAnagram("billiards", "rabid sall"), "billiards, raid sall, false");
	assertEquals(false, isAnagram("poor", "pan."), "poor, pan., false");
	assertEquals(false, isAnagram("aaaaaa", "bbbbbb"), "aaaaaa, bbbbbb, false");
	
	Node* h1 = new Node;
	h1->data = 5;
	h1->next = new Node;
	h1->next->data = 15;
	h1->next->next = new Node;
	h1->next->next->data = -20;
	h1->next->next->next = NULL;
	Node* h2 = NULL;
	
	assertEquals(0, recursiveSum(h1), "recursive sum of h1, 0");
	assertEquals(0, recursiveSum(h2), "recusive sum of h2, 0");
	assertEquals(15, recursiveLargestValue(h1), "recursive l value of h1, 15");
}

