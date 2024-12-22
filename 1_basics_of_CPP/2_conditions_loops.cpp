#include <iostream>
using namespace std;
int main(){
    int a ;
    cin >> a;
    // cout <<"the value of a is :\n "<<a ;
    if (a>0){
        cout<<"a is positive";
    }
    else{
        cout<<"a is negative ";
    }

}
//Who is greater 
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a \n";
    cin>> a;
    cout<<"Enter the value of b \n";
    cin>> b;

    if (a>b){
        cout<<"a is greater than b ";
    }
    else{
        cout<<"b is greater than a";
    }
}

//  positive negative or zero 
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of  a ";
    cin>>  a;
    if(a>0){
        cout<<" a is positive ";
    }
    else if(a<0){
        cout<<"a is negative ";
    }
    else{
        cout<<"a is zero";
    }
}
// lower ,upper and digites 
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<< "enter:";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"this is upper case ";
    }
    else if (ch>='a' && ch<='z'){
        cout<<"this is lower case";

    }
    else if(ch>=1 && ch<=9){
        cout<<"this is itergeral ";
    }
    else{
        cout<< "no output";

    }

}
// ----->>>>>>>> WHILE LOOP <<<<---------
#include <iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int i=1;
     while(i<=n){
        cout<< i <<" is the value of i \n";
        i=i+1;
     }
}

// the sum of n numbers 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"the value of n is ";
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
cout<<"the sum of n numbers is "<<sum;
}

// find sum of all even numbers 
 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"the value of n is ";
    cin>>n;
    int i=0;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
cout<<"the sum of n numbers is "<<sum;
}

//  prime or not 
 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"the value of n is ";
    cin>>n;
    
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"The number is composite\n";
        }
        else{
            cout<<"The number is prime\n ";
        }
        i=i+1;    

    }
}    

// ----->>>>>>>  PATTERN <<<<<<<---------

// Rules --1st see number of rows
// Rule ---2nd see number of coloums

// 1234
// 1234
// 1234
// 1234
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
}

// 321
// 321
// 321        
// formula=== n-column+1
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<n-col+1;
            col=col+1;
        }
        cout<<"\n";
        row=row+1;
    }
}

// 123
// 456
// 789        
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    int count=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<count;
            count=count+1;
            col=col+1;
        }
        cout<<"\n";
        row=row+1;
    }
}
// *
// **
// ***
// ****
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<" * ";
            col=col+1;
        }
        cout<<"\n";
        row=row+1;
    }
}
        
// 1
// 22
// 333
// 4444
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row;
            col=col+1;
        }
        cout<<"\n";
        row=row+1;

    }
}
// 1
// 23
// 456
// 78910
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    int count=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<count;
            count=count+1;
            col=col+1;
        }
        cout<<"\n";
        row=row+1;

    }
}

// 1
// 23
// 345
// 4567
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        int value=row;
        while(col<=row){
            cout<<value;
            value=value+1;
            col=col+1;
        }
        cout<<"\n";
        row=row+1;

    }
}
// 9
// 98
// 987
// 9876
// 98765
// 987654
// 9876543
// 98765432
// 987654321
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<n-col+1;
            col=col+1;
        }
        cout<<"\n";
        row=row+1;

    }
}

// AAA
// BBB
// CCC   
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            char ch='A'+row-1;
            cout<<ch;
            col=col+1;
        }
        cout<<"\n";
        row=row+1;
    }

}
// ABCDEFGH
// ABCDEFGH
// ABCDEFGH
// ABCDEFGH
// ABCDEFGH
// ABCDEFGH
// ABCDEFGH
// ABCDEFGH
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            char ch='A'+col-1;
            cout<<ch;
            col=col+1;
        }
        cout<<"\n";
        row=row+1;
    }

}
// ABCDE
// FGHIJ
// KLMNO
// PQRST
// UVWXY
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    char ch='A';
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<ch;
            ch=ch+1;
            col=col+1;
        }
        cout<<"\n";
        row=row+1;
    }

}
// A
// BB
// CCC
// DDDD
// EEEEE
// FFFFFF
// GGGGGGG
// HHHHHHHH
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            char ch='A'+row-1;
            cout<<ch;
            col=col+1;
        }
        cout<<"\n";
        row=row+1;
    }

}
// A
// AB
// ABC
// ABCD
// ABCDE
// ABCDEF
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            char ch='A'+col-1;
            cout<<ch;
            col=col+1;
        }
        cout<<"\n";
        row=row+1;
    }

}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    char ch='A';
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<ch;
            ch=ch+1;
            col=col+1;
        }
        cout<<"\n";
        row=row+1;
    }
}
// A
// BC
// DEF
// GHIJ
// KLMNO
// PQRSTU
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    char ch='A';
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<ch;
            ch=ch+1;
            col=col+1;
        }
        cout<<"\n";
        row=row+1;
    }
}
// F
// FG
// FGH
// FGHI
// FGHIJ
// FGHIJK
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        char ch='A'+n-1;
        while(col<=row){
            cout<<ch;
            ch=ch+1;
            col=col+1;
        }
        cout<<"\n";
        row=row+1;
    }
}
// F
// EF
// DEF
// CDEF
// BCDEF
// ABCDEF
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        char ch='A'+n-row;
        while(col<=row){
            cout<<ch;
            ch=ch+1;
            col=col+1;
        }
        cout<<"\n";
        row=row+1;
    }
}

//         *
//        **
//       ***
//      ****
//     *****
//    ******
//   *******
//  ********
// *********
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int col=1;
        while(col<=row){
            cout<<"*";
            col=col+1;
            }
    cout<<"\n";
    row=row+1;
    }
}
//       1
//      121
//     12321
//    1234321
//   123454321
//  12345654321
// 1234567654321

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        //print space
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }

        //print 1st triangle 
        int col=1;
        while(col<=row){
            cout<<col;
            col=col+1;

        }
        //print 2nd traingle
         int start=row-1;
         while(start){
            cout<<start;
            start=start-1;
         }




    cout<<"\n";
    row=row+1;
    }

}
