
#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size=0;

    //constructore
    heap(){
        arr[0]=-1;
        int size=0;
    }


    void insert(int val)
    {
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index>1){
            int parent=index/2;
            if(arr[index]>arr[parent]){
                swap(arr[parent],arr[index]);
                index=parent;
            }

            else{
                return;
            }

        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<"\n";
    }

    void deletion(){
        if (size == 0) {
        cout << "nothing to delete";
        return;
    }

    arr[1] = arr[size];
    size--;

    // Take root node to correct position
    int i = 1;
    while (i <= size / 2) {  // Consider internal nodes
        int leftIndex = 2 * i;
        int rightIndex = 2 * i + 1;
        int maxIndex = i;

        if (arr[leftIndex] > arr[i])
            maxIndex = leftIndex;

        if (rightIndex <= size && arr[rightIndex] > arr[maxIndex])
            maxIndex = rightIndex;

        if (maxIndex != i) {
            swap(arr[i], arr[maxIndex]);
            i = maxIndex;
        } else {
            break;
        }
    }

    }
    
};

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;  // Correct calculation for left child index
    int right = 2 * i + 2; // Correct calculation for right child index

    if (left < n && arr[largest] < arr[left]) {
        largest = left;
    }
    if (right < n && arr[largest] < arr[right]) {
        largest = right;
    }
    if (largest != i) {
        swap(arr[largest], arr[i]);
        // Recursive call
        heapify(arr, n, largest);
    }
}


int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
     h.insert(54);
         h.print();
     h.deletion();
        h.print();

    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);


    }
    cout<<"printing an array"<<"\n";
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<"\n";
    return 0;




}