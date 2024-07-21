#include <iostream>
#include <unordered_map>
using namespace std;

// Floyd's Cycle Detection Algorithm
//  (also known as the Tortoise and Hare algorithm) for detecting cycles in a singly linked list.

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


//to remove duplicates from sorted linked list:->

Node * removeDuplicates(Node *head)
{
    // Write your code here
    if(head==NULL){
        return NULL;
    }
    Node* curr=head;
    while(curr->next!=NULL){
        if((curr->next!=NULL)&&curr->data==curr->next->data){
          Node* next_next=curr->next->next;
          Node* nodeTodelete=curr->next;
          delete(nodeTodelete);
          curr->next=next_next;

        }
        else{
            curr=curr->next;
        }
    }
    return head;
}
 


//for unsorted linked list:

Node *removeDuplicates(Node *head) {
  // Write your code here
  if (head == NULL) {
    return NULL;
  }
  unordered_map<int, bool> visited;
  Node *curr = head;
  Node *prev = NULL;
  while (curr != NULL) {
    if (visited[curr->data] == true) {
      Node *deleteNode = curr;
      prev->next = curr->next;  
      curr = curr->next;
      delete (deleteNode);
    } else {
      visited[curr->data] = true;
      prev = curr;
      curr = curr->next;
    }
  }
  return head;

}