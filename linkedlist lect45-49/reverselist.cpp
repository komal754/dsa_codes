#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;
Node(int d){
    this->data=d;
    this->next=NULL;
}
};
/* Node* revereseNode(Node* &head){
    Node* curr=head;
    Node* prev=NULL;
if (head == NULL || head->next == NULL) {
    return head;
}
while(curr!=NULL){
    Node* forward=curr->next;
    curr->next=prev;
    prev=curr;
    curr=forward;

}

return prev;

} */

//using recursion:------------->
// void reverse(LinkedListNode<int>* &head,LinkedListNode<int>* &curr,LinkedListNode<int>*&prev){
//     if(curr==NULL){
//         head=prev;
//         return;
//     }
//    LinkedListNode<int>* forward=curr->next;
//     reverse(head,forward,curr);
//     curr->next=prev;
// }
// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// {
//     // Write your code here
//     if (head == NULL || head->next == NULL) {
//         return head;
//     }
//     LinkedListNode<int> *prev = NULL;
//     LinkedListNode<int> *curr = head;
//     reverse(head,curr,prev);
//     return head;
// }


// Reverse List In K Groups:----------->
/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* kReverse(Node* head, int k) {
    // Write your code here.

    //base call
   if(head==NULL){
       return NULL;
   }


// step->
//reverse k nodes--------->

Node* forward=NULL;
Node* curr=head;
Node* prev=NULL;

int cnt=0;

while(curr !=NULL && cnt < k){
forward=curr->next;
curr->next=prev;
prev=curr;
curr=forward;  
cnt++;  
}


// step:2 --recursion dekhlega aage ka
if(forward!=NULL){
    int remainingcount=0;
    Node* temp=forward;
    while(temp!=NULL){
        remainingcount++;
        temp=temp->next;
    }
if(remainingcount>=k){
    head->next=kReverse(forward,k);
}
else{
head->next=forward;
}
}


//step:3 --return head of reversed list    
return prev;
}