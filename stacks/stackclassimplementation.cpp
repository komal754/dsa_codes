#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    // properties:
    int size;
    int *arr;
    int top;

    // behaviour:
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        // chack for the availability of size:
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack overflow"<<endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
        return -1;
        }
    }

    bool isEmpty(){ 
        if (top== -1){
            return true;
        }
        else{
            return false;
        }

    }
};

int main(){
    cout<<endl;
    Stack st(4);
    st.push(43);
    st.push(4);
    st.push(22);
    st.push(13);
    st.pop();
    cout<<st.peek()<<endl;
    if(st.isEmpty()){
        cout<<"stack is empty"<<endl; 
    }
    else{
        cout<<"stack is not empty "<<endl;
    }

}