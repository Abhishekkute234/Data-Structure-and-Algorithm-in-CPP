#include <iostream>
using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
  {
    // EG 1,3,5 and 2,4,6 are the list and the answer is the 1,2,3,4,5,6

    // we use recursion
    if (list1 == NULL || list2 == NULL)
    {
      return list1 == NULL ? list2 : list1;
    }
    // case 1 -> compair the heads first and make the recursive call

    if (list1->val <= list2->val)
    {
      list1->next = mergeTwoLists(list1->next, list2);
      return list1;
    }
    else
    {
      list2->next = mergeTwoLists(list1, list2->next);
      return list2;
    }
  }
};