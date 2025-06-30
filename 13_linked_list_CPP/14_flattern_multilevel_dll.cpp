#include <iostream>
using namespace std;

class Node
{
public:
  int val;
  Node *prev;
  Node *next;
  Node *child;
};

class Solution
{
public:
  Node *flatten(Node *head)
  {
    //  using recursion
    // CASE 1 - no child node then add
    // CASE 2 - when child node then the curr->child = head
    if (head == NULL)
    {
      return head;
    }

    Node *curr = head;
    while (curr != NULL)
    {
      // if child node exist
      if (curr->child != NULL)
      {
        // STEP 1- we flattern child node
        Node *next = curr->next;
        curr->next = flatten(curr->child);
        curr->next->prev = curr;
        curr->child = NULL;

        // find tail
        while (curr->next != NULL)
        {
          curr = curr->next;
        }

        // attached tail with the next pointer
        if (next != NULL)
        {
          curr->next = next;
          next->prev = curr;
        }
      }
      curr = curr->next;
    }
    return head;
  }
};