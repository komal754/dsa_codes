#include <iostream>
#include <map>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    //  constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory free up for node with data " << value << endl;
    }
};
Node* deleteMiddle(Node* head) {
    if(head==NULL or head->next==NULL) return NULL;
     Node *slow=head, *fast=head, *prev=NULL;
        while(fast!=NULL and fast->next!=NULL){
            fast=fast->next->next;
            prev=slow;
            slow=slow->next;
        }
        prev->next=slow->next;
        slow->next=NULL;
        delete slow;

    return head;       
    }