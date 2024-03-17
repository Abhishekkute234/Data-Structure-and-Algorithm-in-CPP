
// static member function 

/*Static members of a class are not associated with the
 objects of the class. Just like a static variable once
  declared is allocated with memory that can’t be changed
   every object points to the same memory. To know more 
   about the topic refer to a static Member in C++.*/

// C++ Program to show the working of
// static member functions
#include <iostream> 
using namespace std; 

class Box 
{ 
	private: 
	static int length; 
	static int breadth; 
	static int height; 
	
	public:
	
	static void print() 
	{ 
		cout << "The value of the length is: " << length << endl; 
		cout << "The value of the breadth is: " << breadth << endl; 
		cout << "The value of the height is: " << height << endl; 
	}
}; 

// initialize the static data members 

int Box :: length = 10; 
int Box :: breadth = 20; 
int Box :: height = 30; 

// Driver Code

int main() 
{
	
	Box b; 
	
	cout << "Static member function is called through Object name: \n" << endl; 
	b.print(); 
	
	cout << "\nStatic member function is called through Class name: \n" << endl; 
	Box::print(); 
	
	return 0; 
}



