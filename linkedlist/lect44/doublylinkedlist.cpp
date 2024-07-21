#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor

    Node(int d){
      this->data=d;
      this->prev=NULL;
      this->next=NULL;
    }
    ~Node(){
      int val=this->data;
      if(next!=NULL){
      delete next;
      next=NULL;
    }
    cout<<"memory free up for data "<<val<<endl;
    }
};

//traversing linked list:
void print(Node* head){
  Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}

//get the length of linked list:
  int getLength(Node* head){
    int len=0;
    Node* temp=head;
  while(temp!=NULL){
    len++;
    temp=temp->next;
  }
   return len;
  }

  //insertion:
  void insertNodeatHead(Node* &head,Node* &tail,int d){
    if(head==NULL)
    {
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else
    {
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
  }
   void insertNodeatTail(Node* &tail,Node* &head,int d){

     if(tail==NULL)
    {
        Node* temp=new Node(d);
        tail=temp;
        head=temp;
    }
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
  }
     void insertNodeatPosition(Node* &tail,Node* &head, int d,int position){
      Node* temp=head;
       if(position==1){
            insertNodeatHead(head,tail,d);
        return;

       }
       int cnt=1;
       while(cnt<position-1){
        temp=temp->next;
        cnt++;
       }
       if(temp->next==NULL){
        insertNodeatTail(tail,head,d);
        return;
       }
       Node* nodetoInsert=new Node(d);
       nodetoInsert->next=temp->next;
       temp->next->prev=nodetoInsert;
       temp->next=nodetoInsert;
       nodetoInsert->prev=temp;
     }
     void deleteNode(Node* &head,int position){
        if(position==1){
          Node* temp=head;
          temp->next->prev=NULL;
          head=temp->next;
            //free memory
          temp->next=NULL;
          delete temp;
        }
        else{
          //deleting middle or last node

          Node* curr=head;
          Node* prev=NULL;

          int cnt=1;
          while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
          }
          curr->prev=NULL;
          prev->next=curr->next;
          curr->next=NULL;
          delete curr;
        }

        

     }
int main(){

 Node* node1=new Node(10);
 Node* head=node1;
 Node* tail=node1;
/* cout<<"linked list : "<<endl;
print(head);
cout<<"length of linked list : "<<endl;
cout<<getLength(head); */
insertNodeatHead(head,tail,20);
insertNodeatHead(head,tail,22);
insertNodeatHead(head,tail,24);
insertNodeatHead(head,tail,24);
insertNodeatHead(head,tail,36);
insertNodeatTail(tail,head,124);
insertNodeatTail(tail,head,150);
insertNodeatTail(tail,head,326);
insertNodeatPosition(tail,head,34,4);
cout<<"linked list : "<<endl;
print(head);
cout<<endl;
cout<<"length of linked list : "<<endl;
cout<<getLength(head);
cout<<endl;
deleteNode(head,2);
deleteNode(head,4);
cout<<endl;
cout<<"linked list after deletion : "<<endl;
print(head);
}