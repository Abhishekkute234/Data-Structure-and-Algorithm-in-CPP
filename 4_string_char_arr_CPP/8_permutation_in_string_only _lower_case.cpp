#include <iostream>
using namespace std;

// s1 = "ab" s2 = "eidbaooo" does the persmutation of s1 exist in the s2 (ab , ba )
// check true of false

// POINTS - > number (frequency) of character is same
// contain only lower case

// STEP -1 = store the frequesncy  (contain 26 charcter from a to z) using array [ s1[i]-'a'] as a=0 , b=1 .. z=25
// STEP -2 = search s1 permutation in s2 (check the window based searching ) SLIDING WINDOW APPROCH
// we create a window array and compair it with the original array

bool isfreqsame(int freq1[], int freq2[])
{
  for (int i = 0; i < 26; i++)
  {
    if (freq1[i] != freq2[i])
    {
      return false;
    }
  }
  return true;
}

bool checkInclusion(string s1, string s2)
{
  // STEP -1 we store the frequency
  int freq[26] = {0};
  for (int i = 0; i < s1.length(); i++)
  {
    // int index=s[i]-'a';// a ->0 , b-> 1...
    // freq[index]++;
    freq[s1[i] - 'a']++;
  }

  // STEP 2 -> window size
  int windowsize = s1.length();

  for (int i = 0; i < s2.length(); i++)
  {
    int windindex = 0, currindex = i;
    int windofrequ[26] = {0};
    // we check the loop cannot get above the window size
    while (windindex < windowsize && currindex < s2.length())
    {
      windofrequ[s2[currindex] - 'a']++;
      windindex++;
      currindex++;
    }
    // check the match in the array
    if (isfreqsame(freq, windofrequ))
    {
      return true;
    }
  }
  return false;
}

int main()
{
}