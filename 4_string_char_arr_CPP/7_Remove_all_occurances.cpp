#include <iostream>
#include <string>
using namespace std;

// EG s="daabcbaabcbc"  part = "abc"
// Whenever the part occurse then we have to remove that part

// eg output of the above sttring is  "dababc" after removal of abc
// read forward from left

// string.find(substring) --> this use to find the starting position of the string --> it  print the 1st index
// string.erase(start,end) --> to delete the substring in the string

// STEP 1 -find part and delete the part 
string removeOccurrences(string s, string part) {
  while(s.length()>0 && s.find(part)<s.length()){

    // start means the staring part of the find and the end mean the length of the end 
      s.erase(s.find(part),part.length());
  }
  return s;
  
}

int main()
{
}