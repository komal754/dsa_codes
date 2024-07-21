/* #include <iostream>
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

    ~Node()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "free up memory for" << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{
    // asssuming element is present in the list
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }

    // list is not empty
    // assuming element present in list
    else
    {
        Node* curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element found ->curr represent element wala node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node* &tail,int value){
    //list is empty
    if(tail==NULL){
        cout<<"list is empty ,please check!!!!"<<endl;
        return;
    }

    //else the list is not empty

    else{
//assuming value is present in the list
Node* prev=tail;
Node* curr=tail->next;
while (curr->data!=value){
    prev=curr;
    curr=curr->next;    
}
prev->next=curr->next;

//1 node linked list
if(curr==prev){
    tail=NULL;
}

//>=2 Node linked list
else if(tail==curr){
    tail=prev;
}
curr->next=NULL;
delete curr;
    }
}
void print(Node *&tail)
{
    Node *temp = tail;
    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

int main()
{
    Node *tail = NULL;
    // inserting in empty node
    cout<<endl;
    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 2);
    print(tail);
    insertNode(tail, 2, 8);
    print(tail);
    insertNode(tail, 8, 9);
    print(tail);
    insertNode(tail, 2, 10);
    print(tail);
    deleteNode(tail,2);
    print(tail);    
    deleteNode(tail,3);
    print(tail);    


} */


#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

Node (int d){
    this->data=d;
    this->next=NULL;
}

~Node(){    
int value=this->data;
if(next!=NULL){
    delete next;
    next=NULL;
}
cout<<"memory is free for node with data:"<<value<<endl;
}
};
void insertNode(Node *&tail,int element ,int d){

    //for empty list
    if(tail==NULL){
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        //non empty list
        Node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        //element found ->curr is representing element node 
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void deleteNode(Node* &tail,int value){
    //empty list

    if(tail==NULL){
    cout<<"list is empty "<<endl;
    return;
    }
    else{
        //list is not empty

        //assuming valu is present
        Node* prev=tail;
        Node* curr=tail->next;
      while(curr->data!=value)
        {
            prev=curr;
            curr=curr->next;
        }
        if(curr==prev){
            tail=NULL;
        }
        if(tail==curr){
            tail=prev;
        }
        prev->next=curr->next;

        curr->next=NULL;
        delete curr;
    }
}
    void print(Node* tail){
       Node* temp=tail;
              if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
       }
       do{
        cout<<tail->data<<" ";
        tail=tail->next;
       }
       while(tail!=temp);

    }
    int main(){
        Node* tail=NULL;
        insertNode(tail,5,4);
        /* insertNode(tail,4,3);
        insertNode(tail,3,10);
        insertNode(tail,3,11); */
        deleteNode(tail,4);
        print(tail);
    }

