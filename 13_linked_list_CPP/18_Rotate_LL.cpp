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
  int lenOfList(ListNode *head)
  {

    ListNode *tmp = head;

    int len = 0;
    while (tmp != nullptr)
    {
      len++;
      tmp = tmp->next;
    }

    return len;
  }
  ListNode *rotateRight(ListNode *head, int k)
  {
    if (head == nullptr || head->next == nullptr)
      return head;

    int len = lenOfList(head);

    // greter or multiple of the length
    // for
    k = k % len;

    if (k == 0)
      return head;

    // Step 1: Find the new tail after rotation
    // new tail is at position (len - k)
    int forward = len - k;
    ListNode *newTail = head;
    for (int i = 1; i < forward; i++)
    {
      newTail = newTail->next;
    }
    // Step 2: Set new head
    ListNode *newHead = newTail->next;

    // Step 3: Break the list at newTail
    newTail->next = nullptr;

    // Step 4: Go to the end of new head and attach old head
    ListNode *temp = newHead;
    while (temp->next != nullptr)
    {
      temp = temp->next;
    }
    temp->next = head;

    return newHead;
  }
};