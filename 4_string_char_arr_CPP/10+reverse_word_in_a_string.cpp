#include <algorithm>
#include <iostream>
#include <string>

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
// STEP !
  reverse(s.begin(), s.end());
  //  after reverse the string the all words come on there original position 

  // STEP 2
  for(int i=0 ;i<n;i++){

    string word="";
    while(i<n && s[i]!=' '){
      word+=s[i];
      i++;
    }


    reverse (word.begin(),word.end());
    if (word.length()>0){
      ans +=" "+ word;
    }


  }
  // starting from 1 because the 1st letter is empty 
return ans.substr(1);
}

int main()
{
  string str = "the sky is blue";
  cout << reverseTheWord(str);
}