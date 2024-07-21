//sort linked list with 0,1,2-------->


#include<iostream>
//Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


void insertAtTail(Node* &tail,Node* &curr){
tail->next=curr;
tail=curr;
}

//separate list for 0s,1s,2s
Node *sortList(Node *head) {
     Node* zerohead=new Node(-1);
        Node* zerotail=zerohead;
    Node* onehead=new Node(-1);
        Node* onetail=onehead;
         Node* twohead=new Node(-1);
        Node* twotail=twohead;

Node* curr=head;
while(curr!=NULL){
    int value=curr->data;

if(value==0){
    insertAtTail(zerotail,curr);
}
else if(value==1){
    insertAtTail(onetail,curr);
}
else if(value==2){
    insertAtTail(twotail,curr);
}
curr=curr->next;
}

//merge 3 sublists:

if(onehead->next!=NULL){             //list of 1 not empty
    zerotail->next=onehead->next;
}
else{
    zerotail->next=twohead->next;
}
onetail->next=twohead->next;
twotail->next=NULL;

//setup head

head=zerohead->next;

//delete dummy node
delete zerohead;
delete onehead;
delete twohead;
return head;
}



//alternate:-------->   
Node* sortList(Node *head){
    // Write your code here.
    int zerocount=0;
    int twocount=0;
    int onecount=0;

    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zerocount++;
        }
                else if(temp->data==1){
            onecount++;
        }
                else if(temp->data==2){
            twocount++;
        }
        temp=temp->next;
    }
 temp=head;
while(temp!=NULL){
    if(zerocount!=0){
        temp->data=0;
        zerocount--;
    }
        else if(onecount!=0){
        temp->data=1;
        onecount--;
    }
            else if(twocount!=0){
        temp->data=2;
        twocount--;
    }
    temp=temp->next;
}

    return head;


}