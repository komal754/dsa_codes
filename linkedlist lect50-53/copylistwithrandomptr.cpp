   
   #include<iostream>
   #define NULL __null
   using namespace std;
    class Node{
        public:
            int data;
            Node * next;

            Node * random;
            Node(int data){
                this->data=data;
                this->next=NULL;
                this->random=NULL;
            }
    };
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
            insertAtTail(clonehead,clonetail,temp->data);
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