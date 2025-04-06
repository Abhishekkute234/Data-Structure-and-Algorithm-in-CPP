#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    // push
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);

    // pop
    s.pop();
    // peak element (top element)
    cout << "top element is " << s.top() << endl;
    // is empty or not
    if (s.empty())
    {
        cout << "is empty\n";
    }

    else
    {
        cout << "not empty\n";
    }

    // size
    cout << "size of stack is "
         << s.size();
    cout << "\n";

    for (int i = 0; i < s.size(); i++)
    {
        while (s.size() != 0)
        {
            cout << s.top() << "\n";
            s.pop();
        }
    }
}