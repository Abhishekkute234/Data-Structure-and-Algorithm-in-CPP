#include <iostream>
using namespace std;

bool checkpalindrom(char name[], int n)
{
  int s = 0;
  int e = n - 1;

  while (s <= e)
  {
    if (name[s] != name[e])
    {
      return 0;
    }
    else
    {
      s++;
      e--;
    }
  }
  return 1;
}

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
  int n = length(name, 100);

  checkpalindrom(name, n);
  if (checkpalindrom(name, n) == true)
  {
    cout << "yes is palindorm\n";
  }
  else
  {
    cout << "Not a palindrom \n";
  }
}