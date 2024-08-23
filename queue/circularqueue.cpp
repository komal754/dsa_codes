#include <bits/stdc++.h> 
class CircularQueue{
          int *arr;
        int rear;
        int front;
        int size;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        // Write your code here.
        size=100001;
      arr=new int[size];
      front=rear=-1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        if((front==0 && rear==size-1)|| (rear==(front-1)%(size-1))){
//cout<<"queue is full";
            return false;
        }

        else if(front==-1 ){
            //adding first element

            front=rear=0;
        }

        else if(rear==size-1 && front!=0){
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        if(front==-1){
          //  cout<<"queue is empty "<<endl;
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
        if(front==rear){
            front=rear=-1;
        }
        else if(front==size-1){
        front=0;// to maintain cyclic structure
        }
        else{
            front++;
        }
        return ans;
    }
};