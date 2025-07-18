#include <iostream>
using namespace std;

struct ListNode
{
  int val;
  ListNode next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
  ListNode *detectCycle(ListNode *head)
  {
    // step -1 find if there is a cycle or not
    // step-2  if exist then initilize slow = head and move both slow and fast my +1

    ListNode *slow = head;
    ListNode *fast = head;
    bool iscycyle = false;

    while (fast != NULL && fast->next != NULL)
    {
      slow = slow->next;
      fast = fast->next->next;
      if (slow == fast)
      {
        iscycyle = true;
        break;
      }
    }
    // if there is no cycle
    if (!iscycyle)
    {
      return NULL;
    }

    // if there is a cycle then
    slow = head;
    while (slow != fast)
    {
      slow = slow->next;
      fast = fast->next;
    }
    return slow;
  }
};