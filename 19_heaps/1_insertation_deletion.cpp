#include <iostream>
using namespace std;

class heap
{
public:
  int arr[100];
  int size = 0;

  void insert(int val)
  {

    // increace size by one

    size = size + 1;

    //  put at the last index
    int index = size;

    // put at last
    arr[index] = val;

    while (index > 1)
    {
      int parent = index / 2;
      if (arr[parent] < arr[index])
      {
        swap(arr[parent], arr[index]);
        index = parent;
      }
      else
      {
        return;
      }
    }
  }

  void print()
  {
    for (int i = 1; i <= size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << "\n";
  }

  void delet()
  {
    if (size == 0)
    {
      cout << "nothing to deleet";
      return;
    }

    // replace 1st node from last
    arr[0] = arr[size];

    // remove that node 
    size--;

    // now send root node to its correct position
    int i = 1;
    while (i < size)
    {
      int leftindex = 2 * i;
      int rigthindex = 2 * i + 1;

      if (leftindex < size && arr[i] < arr[leftindex])
      {
        swap(arr[i], arr[leftindex]);
        i = leftindex;
      }

      else if (rigthindex < size && arr[i] < arr[rigthindex])
      {
        swap(arr[i], arr[rigthindex]);
        i = rigthindex;
      }
      else
      {
        return;
      }
    }
  }
};

int main()
{

  heap h;

  h.insert(60);
  h.insert(50);
  h.insert(40);
  h.insert(30);
  h.insert(20);

  h.print();

  h.insert(55);
  h.print();
  h.delet();
  h.print();
}
