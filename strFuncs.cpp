#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
  if(s1.length() < 1 && s2.length() >= 1){
	  return false;
  }
  if(s2.length() < 1 && s1.length() >= 1){
	  return false;
  }
  if(s2.length() < 1 && s2.length() < 1){
	  return true;
  }

  if(s1.find(s2.substr(0,1))>-1){
	  return true && isAnagram(s1, s2.substr(1));
  }
  else{
	  return false;
  }
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
  if(s1.length() == 1){
	  return true;
  }
  if(s1.substr(0,1) == s1.substr(s1.length()-1,1)){
	  return isPalindrome(s1.substr(1,s1.length()-2));
  }
  else{
	  return false;
  }
}


