// find max occuring frequency 
// eg [1,5,3,6,7,3,7,3,3]-->here max occring character is 3 then print 3

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int maxi(vector<int> &arr,int n){
    unordered_map<int ,int>count;
    int maxFre=0;
    int maxans=0;

    for(int i=0;i<arr.size();i++){
        count[arr[i]]++;
        maxFre=max(maxFre,count[arr[i]]);
    }

    int max=INT8_MIN;
    int ans=-1;
    for(auto i:count){
        if(i.second>max){
            max=i.second;
            ans=i.first;
        }
    }

    return ans;



    
}

int main(){

}