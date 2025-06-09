#include <iostream>
using namespace std;

void reverse(char name[], int n)
{
  int s = 0;
  int e = n - 1;

  while (s < e)
  {
    swap(name[s++], name[e--]);
  }
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

  reverse(name, n);
  cout << name << "\n";
}