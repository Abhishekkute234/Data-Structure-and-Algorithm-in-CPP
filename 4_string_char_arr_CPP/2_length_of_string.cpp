#include <iostream>
using namespace std;

int length(char name[], int n)
{
  int count = 0;
  for (int i = 0; name[i] != '\0'; i++)
  {

    count++;
  }
  return count;
}

int main()
{
  char name[100];
  cout << "Enter your name ";
  cin >> name;

  cout << "your name is : ";
  cout << name << "\n";
  cout << "Length : " << length(name, 100);
}