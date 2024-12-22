
// run time polymorpism

// 3.function overriding
// C++ program for function overriding with data members

#include <bits/stdc++.h>
using namespace std;

// base class declaration.
class Animal {
public:
	string color = "Black";
};

// inheriting Animal class.
class Dog : public Animal {
public:
	string color = "Grey";
};

// Driver code
int main(void)
{
	Animal A= Dog(); // accessing the field by reference
					// variable which refers to derived
	cout << A.color<<"\n";

    Dog d = Dog(); // accessing the field by reference
					// variable which refers to derived
	cout << d.color;
}
