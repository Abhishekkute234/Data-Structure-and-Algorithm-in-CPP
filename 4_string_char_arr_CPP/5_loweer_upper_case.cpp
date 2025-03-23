#include <iostream>
using namespace std;

void tolowercase(char ch[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (ch[i] >= 'A' && ch[i] <= 'Z')
    {
      ch[i] = ch[i] - 'A' + 'a'; // Convert to lowercase
    }
  }
}

void touppercase(char ch[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (ch[i] >= 'a' && ch[i] <= 'a')
    {
      ch[i] = ch[i] - 'a' + 'A'; // Convert to lowercase
    }
  }
}
int length(char name[])
{
  int count = 0;
  while (name[count] != '\0')
  {
    count++;
  }
  return count;
}

int main()
{
  char name[100];
  cout << "Enter your name: ";
  cin >> name;

  cout << "Your name is: " << name << "\n";

  int n = length(name); // Get the actual length of the name
  tolowercase(name, n); // Convert the name to lowercase

  cout << "Your name in lowercase: " << name << "\n";
  touppercase(name, n); // Convert the name to lowercase

  cout << "Your name in uppercase : " << name << "\n";

  return 0;
}
