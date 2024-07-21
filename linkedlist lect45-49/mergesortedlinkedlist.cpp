#include <bits/stdc++.h>

//***********************************************************
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

// ************************************************************/
Node<int>* solve(Node<int>* first, Node<int>* second){
    if(first->next==NULL){
        first->next=second;
        return first;
    }
    Node<int>* curr1=first;
    Node<int>* curr2=second;
    Node<int>* next1=curr1->next;
    while(next1!=NULL && curr2!=NULL){
        if((curr2->data>=curr1->data) && (curr2->data<=next1->data) ){

            //add node in between first list 
            curr1->next=curr2;
            Node<int>* next2=curr2->next;//to save the nodes after curr2 in second list
            curr2->next=next1;

            //update pointers
            curr1=curr2;
            curr2=next2;
        }
        else{
            //curr1 & next1 ko aage bdhao
            curr1=next1;
            next1=next1->next;

            if(next1==NULL){
                curr1->next=curr2;
                return first;
            }
        }
    }
    return first;
}
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first==NULL){
        return second;
    }
    if(second==NULL){
        return first;
    }
    if(first->data<=second->data){
        return solve(first,second);
    }
        if(second->data<=first->data){
        return solve(second,first);
    }
    
}
