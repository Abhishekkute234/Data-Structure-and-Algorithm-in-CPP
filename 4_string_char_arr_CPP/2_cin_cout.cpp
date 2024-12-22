// String 

// the difference between char and string is that 
// string consider the space as the space and char 
// consider it as "\0" and stop the output there

#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;//when we not use get line it consider the space as pi "\0"
	cout<<s;
}