#include <iostream>
#include <cstring> // For strlen, strcpy, etc.
#include <string>  // For std::string

using namespace std;

//  As vector is a advance version of array in the same way the string is a advance version of char array
//  STRING IS DYNAIMC IN NATURE && Char array are static in nature
// "\0 " is use to stop the printing

//  getline (str, size , delimiter )
// delimiter is a special character use to stop the printing of the string

int main()
{
  // Character Array (C-style string)
  char name[20] = "ApnaCollege";
  cout << "C-style string: " << name << endl;

  // Reading input into character array
  cout << "Enter your name (C-style): ";
  cin.getline(name, 20);
  cout << "Hello, " << name << "!" << endl;

  // String class (C++ string)
  string s = "Data Structures";
  cout << "C++ string: " << s << endl;

  // Reading input into string
  cout << "Enter your favorite subject: ";
  getline(cin, s);
  cout << "Your favorite subject is: " << s << endl;

  // String operations
  cout << "Length of your subject: " << s.length() << endl;
  s += " is interesting!";
  cout << "After concatenation: " << s << endl;

  // Copying C-style strings
  char copy[20];
  strcpy(copy, name);
  cout << "Copied C-style string: " << copy << endl;

  return 0;
}
