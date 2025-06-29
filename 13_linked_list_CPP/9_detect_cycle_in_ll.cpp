#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
  bool hasCycle(ListNode *head)
  {
    // use slow fast pointer
    // slow = +1
    // fast = +2
    ListNode *slow = head;
    ListNode *fast = head;

    //  if even node then fast != NULL and for odd no of nodes fast ->next != NULL
    while (fast != NULL && fast->next != NULL)
    {

      slow = slow->next;       //+1
      fast = fast->next->next; //+2
      if (slow == fast)
      {
        return true;
      }
    }

    return false; // if we get out of the loop
  }
};