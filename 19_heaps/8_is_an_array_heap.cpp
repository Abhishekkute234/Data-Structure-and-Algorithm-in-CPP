//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
     //for 0 based indexing left child=2i+1 & right child=2i+2
        //dont chk for leaf nodes -- half of the array
      
    bool isMaxHeap(int arr[], int n)
    {
        //for 0 based indexing left child=2i+1 & right child=2i+2
        //dont chk for leaf nodes -- half of the array
        for(int i=0;i<n/2;i++)
        {
            if(arr[i]<arr[2*i+1] || arr[i]<arr[2*i+2])
                return false;
        }
        return true;
       }
};


//{ Driver Code Starts.
int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin >> n;
       int a[4*n]={0};
       for(int i =0;i<n;i++){
           cin >> a[i];
       }
       Solution ob;
       cout<<ob.isMaxHeap(a, n)<<endl;
        
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends