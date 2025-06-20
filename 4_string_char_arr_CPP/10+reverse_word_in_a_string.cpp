#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// input :"the sky is blue" -> output: "blue is sky the ""
// also remove the 2 or more than two spaces

// EG - "the pen "
// STEP 1- reverse the string -> "nep eht"  reverse (begin(),end())
// STEP 2 - correct then
string reverseTheWord(string s)
{
  int n = s.length();
  string ans = "";

  reverse_iterator(s.begin(), s.end());
}

int main()
{
  string str = "the sky is blue";
  cout << reverseTheWord(str);
}