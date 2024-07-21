#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
Node *reverse(Node *head) {
  Node *prev = NULL;
  Node *curr = head;

  while (curr != NULL) {
    Node *forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
  }
  return prev;
}
Node *add(Node *first, Node *second) {
  int carry = 0;
  Node *anshead = new Node(0);

  Node *anstail = anshead;

  while (first != NULL || second != NULL || carry != 0) {
    int val1 = 0;
    if (first != NULL) {
      val1 = first->data;
      first = first->next;
    }
    int val2 = 0;

    if (second != NULL) {
      val2 = second->data;
      second = second->next;
    }
    int sum = carry + val1 + val2;
    int digit = sum % 10;
    carry = sum / 10;
    Node* result = new Node(digit);

    anstail->next = result;

    anstail = anstail->next;
  }
  return anshead->next;
}
Node *addTwoLists(Node *first, Node *second) {
  // Write your code here.
  first = reverse(first);
  second = reverse(second);
  Node *ans = add(first, second);

  ans = reverse(ans);
  return ans;
}