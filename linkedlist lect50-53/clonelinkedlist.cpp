#include<iostream>
#include<unordered_map>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
     Node* random;
    Node(int d)
    {
        this->val = d;
        this->next = NULL;
    }
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:

void insertAtTail(Node* & head,Node* &tail,int d){
    Node* newnode=new Node(d);
    if(head==NULL){
head=newnode;
tail=newnode;
return ;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
    Node* copyRandomList(Node* head) {
   //step1: create a clone list
        Node* temp=head;
        Node*clonehead=NULL;
        Node* clonetail=NULL;
        
        while(temp!=NULL){
            insertAtTail(clonehead,clonetail,temp->val);
            temp=temp->next;
        }
        
        
        
        
        //step2: add clone nodes in between original nodes
        
        Node* originalnode=head;
        Node* clonenode=clonehead;
        
        while(originalnode!=NULL && clonenode!=NULL){
            Node* next=originalnode->next;
            originalnode->next=clonenode;
            originalnode=next;
            
            next=clonenode->next;
            clonenode->next=originalnode;
            clonenode=next;
        }
        //step3: copy random pointer
        
         temp=head;
        while(temp!=NULL){
        if(temp->next!=NULL){
            temp->next->random=temp->random?temp->random->next:temp->random;
        }
        temp=temp->next->next;
        } 
        //step4: revert changes done in step2
        
        originalnode=head;
        clonenode=clonehead;
        while(clonenode!=NULL && originalnode!=NULL){
            originalnode->next=clonenode->next;
            originalnode=originalnode->next;
            if(originalnode!=NULL){
            clonenode->next=originalnode->next;
            }
            clonenode=clonenode->next;
        }
        //return ans
        return clonehead;
    }



// ----------------------ALTERNATE----------------------------
/*         //step1: create clone list
        Node* cloneHead=NULL;
        Node* cloneTail=NULL;
       Node* temp=head;
       while(temp!=NULL){
        insertAtTail(cloneHead,cloneTail,temp->val);
        temp=temp->next;
       }

       //step:2 create map
       unordered_map<Node*,Node*>oldtoNewnode;
     Node* originalhead=head;
     Node* clonenode=cloneHead;
     while(originalhead!=NULL && clonenode!=NULL){
        oldtoNewnode[originalhead]=clonenode;
        originalhead=originalhead->next;
        clonenode=clonenode->next;
     }
     originalhead=head;
     clonenode=cloneHead;

     while(originalhead!=NULL){
        clonenode->random=oldtoNewnode[originalhead->random];
        originalhead=originalhead->next;
        clonenode=clonenode->next;
     }
     return cloneHead;
    } */
};