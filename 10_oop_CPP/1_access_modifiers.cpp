// object orintation programmmig

// the semicolon is important after class 
// the size of empty class is 1 byte of memory 
// we also create a class in oother file and just say its

// #include <say the file name.cpp>

// access modifiers 
// privte -just access in the class,all the membesr are by default 
// private 

// public -which can be access anywhere in the code 

// protected - this means that just one class is accaess in the another class 
// of that memeber 
// C++ program to demonstrate


// protected access modifier
#include <bits/stdc++.h>
using namespace std;

// base class
class Parent
{ 
	// protected data members
	protected:
	int id_protected;
	
};

// sub class or derived class from public base class
class Child : public Parent
{
	public:
	void setId(int id)
	{
		
		// Child class is able to access the inherited 
		// protected data members of base class
		
		id_protected = id;
		
	}
	
	void displayId()
	{
		cout << "id_protected is: " << id_protected << endl;
	}
};

// main function
int main() {
	
	Child obj1;
	
	// member function of the derived class can
	// access the protected data members of the base class
	
	obj1.setId(81);
	obj1.displayId();
	return 0;
}