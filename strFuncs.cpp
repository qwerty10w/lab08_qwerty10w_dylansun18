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
  s1.erase(remove_if(s1.begin(), s1.end(), ::ispunct), s1.end());
  s1.erase(remove_if(s1.begin(), s1.end(), ::isspace), s1.end());
  s2.erase(remove_if(s2.begin(), s2.end(), ::ispunct), s2.end());
  s2.erase(remove_if(s2.begin(), s2.end(), ::isspace), s2.end());
  transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
  transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
  if(!(s1.length() == s2.length())){
	  return false;
  }
  for(int i = 0; i < s1.length(); i++){
	string s1f = s1.substr(i,1);
	if(s2.find(s1f) != string::npos){
		s2.erase(s2.find(s1f), 1);
	}

  }
  if(s2.length() == 0){
	  return true;
  }
  else{
	  return false;
  }
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
  string s2 = s1;
  transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
  if(s2.length() == 1){
	  return true;
  }
  if(s2.substr(0,1) == s2.substr(s2.length()-1,1)){
	  return isPalindrome(s2.substr(1,s2.length()-2));
  }
  else{
	  return false;
  }
}


