#include <iostream>
#include <map>
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
bool Floyddetect(Node *head)
{
    // If head is already NULL, then it is the circular linked list
    // with length zero.
    if (head == NULL)
    {
        return true;
    }

    // If next pointer of head is already NULL, then it the linear linked
    // list of length 1, hence we return false here.
    if (head->next == NULL)
    {
        return false;
    }

    // Initialising slow and fast pointers with head.
    Node *slow = head, *fast = head;

    // Iterating through the linkedlist till, fast doesn't reach end of
    // linked list or slow pointer will not become equal to fast pointer.
    while (fast != NULL && fast->next != NULL)
    {
        // Moving slow pointer by one step.
        slow = slow->next;
        // Moving fast pointer by two steps.
        fast = fast->next->next;

        // Checking if updated slow and fast pointer values are same or not.
        if (slow == fast)
        {
            break;
        }
    }

    // After completing the traversal, if slow and fast pointers meet and
    // the node of meeting is node pointed by head, then linkedlist is circular.
    if (slow == fast && slow == head)
    {
        return true;
    }

    // If linkedlist is not circular, then return false.
    return false;
}

//get the intersection of slow and fast node
Node *floydCyclepresent(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            cout << "cycle present at" << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}

//get the starting node of loop

Node *getStartingNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *intersection = floydCyclepresent(head);
    Node *slow = head;

    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}


//for removing the loop
void removeLoop(Node* head){
    if(head==NULL){
        return;
    }
    Node* startofloop=getStartingNode(head);
    Node* temp=startofloop;
    while(temp!=startofloop){
        temp=temp->next;
    }
temp->next=NULL;
}

// USING MAP:

bool detectLOOP(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    map<Node *, bool> visited;
    Node *temp = head;

    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return true;
        }
        visited[temp]=true;
        temp = temp->next;
    }
    return false;
}