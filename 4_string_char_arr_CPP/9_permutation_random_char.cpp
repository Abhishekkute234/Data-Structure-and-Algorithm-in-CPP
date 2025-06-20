#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// Function to check if two frequency maps are the same
bool isFreqSame(unordered_map<char, int> &map1, unordered_map<char, int> &map2) {
    if (map1.size() != map2.size()) return false;
    for (auto &pair : map1) {
        if (map2[pair.first] != pair.second)
            return false;
    }
    return true;
}

bool checkInclusion(string s1, string s2) {
    if (s1.length() > s2.length()) return false;

    unordered_map<char, int> freqS1;
    unordered_map<char, int> windowFreq;

    // Step 1: Store frequency of s1
    for (char ch : s1) {
        freqS1[ch]++;
    }

    int windowSize = s1.length();

    // Step 2: Initialize the first window
    for (int i = 0; i < windowSize; i++) {
        windowFreq[s2[i]]++;
    }

    // Step 3: Slide the window over s2
    for (int i = windowSize; i <= s2.length(); i++) {
        if (isFreqSame(freqS1, windowFreq)) return true;

        // Slide the window (remove one from left, add one to right)
        if (i < s2.length()) {
            windowFreq[s2[i]]++;                      // Add new character
            windowFreq[s2[i - windowSize]]--;         // Remove old character

            // Clean up 0-count entries to keep the maps clean
            if (windowFreq[s2[i - windowSize]] == 0) {
                windowFreq.erase(s2[i - windowSize]);
            }
        }
    }

    return false;
}

int main() {
    string s1 = "aB1!";
    string s2 = "xyza1B!lmno";
    
    if (checkInclusion(s1, s2)) {
        cout << "Permutation exists in s2." << endl;
    } else {
        cout << "No permutation found in s2." << endl;
    }

    return 0;
}
