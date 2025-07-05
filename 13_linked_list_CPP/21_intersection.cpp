#include <iostream>
using namespace std;

class ListNode
{
public:
  int val;
  ListNode *prev;
  ListNode *next;
  ListNode *child;
};

class Solution
{
public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
  {
    ListNode *temp;
    while (headA != NULL)
    {
      temp = headB;
      while (temp != NULL)
      {
        if (headA == temp)
        {
          return headA;
        }
        temp = temp->next;
      }
      headA = headA->next;
    }
    return NULL;
  }
};