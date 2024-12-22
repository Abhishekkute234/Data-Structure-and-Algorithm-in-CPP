// A pure virtual function (or abstract function) in C++ is a virtual function for which we 
// can have an implementation, But we must override that function in the derived class, otherwise,
//  the derived class will also become an abstract class. A pure virtual function is declared by assigning
//   0 in the declaration.

// C++ Program to illustrate the abstract class and virtual
// functions
#include <iostream>
using namespace std;

class Base {
	// private member variable
	int x;

public:
	// pure virtual function
	virtual void fun() = 0;

	// getter function to access x
	int getX() { return x; }
};

// This class inherits from Base and implements fun()
class Derived : public Base {
	// private member variable
	int y;

public:
	// implementation of the pure virtual function
	void fun() { cout << "fun() called"; }
};

int main(void)
{
	// creating an object of Derived class
	Derived d;

	// calling the fun() function of Derived class
	d.fun();

	return 0;
}
