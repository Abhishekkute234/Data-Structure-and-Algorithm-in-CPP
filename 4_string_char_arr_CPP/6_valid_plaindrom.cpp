#include <iostream>
#include <string>
using namespace std;

class Solution
{
private:
    // Function to check if a character is alphanumeric
    bool valid(char ch)
    {
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
    }

    // Function to convert character to lowercase
    char toLowerCase(char ch)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            return ch + ('a' - 'A');
        }
        return ch;
    }

public:
    bool isPalindrome(string s)
    {
        string temp = "";

        // Remove non-alphanumeric characters and convert to lowercase
        for (int j = 0; j < s.length(); j++)
        {
            if (valid(s[j]))
            {
                temp.push_back(toLowerCase(s[j]));
            }
        }

        // Check if the filtered string is a palindrome
        int left = 0, right = temp.length() - 1;
        while (left < right)
        {
            if (temp[left] != temp[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

// Example usage
int main()
{
    Solution sol;
    string str = "A man, a plan, a canal: Panama";
    cout << (sol.isPalindrome(str) ? "Palindrome" : "Not a palindrome") << endl;
    return 0;
}
