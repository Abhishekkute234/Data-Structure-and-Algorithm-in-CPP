#include<iostream>
using namespace std;

// create an array to count occurrences
char getmax(string s){
    int arr[26] = {0};
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        int index = 0;
        if(ch >= 'a' && ch <= 'z'){
            index = ch - 'a';
        }
        else{
            index = ch - 'A';
        }

        arr[index]++;
    } 

    // find max occurring character
    int maxi = -1;
    int ans = 0;
    for(int i = 0; i < 26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    char answer = 'a' + ans;
    return answer; // Fix: Return the actual character, not the index
}

int main(){
    string name = "hello babber";
    cout << getmax(name) << endl;

    return 0;
}
