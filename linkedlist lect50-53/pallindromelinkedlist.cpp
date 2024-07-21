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
// class Solution{
//   private:
//     //Function to check whether the list is palindrome.
//     bool checkpallindrome(vector<int> arr){
//         int s=0;
//         int e=arr.size()-1;
//         while(s<=e){
//             if(arr[s]!=arr[e]){
//                 return 0;
//             }
//             s++;
//             e--;
//         }
//         return 1;
//     }
//     public:
//     bool isPalindrome(Node *head)
//     {
//         //Your code here
//         vector<int> arr;
//         Node* curr=head;
//         while(curr!=NULL){
//           arr.push_back(curr->data);
//           curr=curr->next;
//           }
//           return checkpallindrome(arr);
//     }
// };


class Solution{
    private:
    Node* getmid(Node* head){
        Node* slow=head;
        Node* fast=head->next;
        
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;   
        }
        return slow;
    }
    
    Node* reverse(Node* head)
    {
        Node* curr=head;
        Node* prev=NULL;
        Node* next=NULL;
        
        while(curr!=NULL){
            Node* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    
    public:
    bool isPalindrome(Node* head)
    {
        if(head->next==NULL){
            return true;
        }
    
    Node* middle=getmid(head);
    
    Node* temp=middle->next;
    middle->next=reverse(temp);
    
     Node* head1=head;
     Node* head2=middle->next;
     
     while(head2!=NULL){
     if(head1->data!=head2->data){
         return false;
     }
     head1=head1->next;
     head2=head2->next; 
     }
         temp =middle->next;
        middle->next=reverse(temp);
        return true;
    }
};