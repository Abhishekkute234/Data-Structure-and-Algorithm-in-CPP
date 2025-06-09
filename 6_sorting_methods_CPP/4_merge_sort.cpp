// merge sort
#include<iostream>
using namespace std;
void merge(int arr[],int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int first[len1];
    int sec[len2];
    // here k is main array index
    int k=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[k++];
    }
    k=mid+1;
    for(int j=0;j<len2;j++){
        sec[j]=arr[k++];
    }

    // merge
    int index1=0;
    int index2=0;
    k=s;

    while(index1<len1 && index2<len2){
        if(first[index1]<sec[index2]){
            arr[k]=first[index1++];
        }
        else{
            arr[k]=sec[index2++];
        }
    }
    while(index1<len1){
        arr[k++]=first[index1++];
    }
    while(index2<len2){
        arr[k++]=sec[index2++];
    }
}
void Msort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    
    // left part
    Msort(arr,s,mid);
    // right part
    Msort(arr,mid+1,e);

    // merge
    merge(arr,s,e);
}
int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;
    Msort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}