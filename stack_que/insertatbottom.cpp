#include<bits/stdc++.h>
#include<stack>
using namespace std;

void solve(stack<int> &myStack,int x){

    if(myStack.empty()){
        myStack.push(x);
        return  ;
    }
    int num=myStack.top();
    myStack.pop();

    solve(myStack,  x);

  // After the base case is triggered and x is
// pushed to the bottom of the stack,
// the recursion starts to unwind.As the recursion unwinds,
// the previously removed elements(stored in num)
// are pushed back onto the stack in the original order.This ensures that
// the original order of elements is preserved,
// with x now at the bottom of the stack.

    myStack.push(num);
    
}
stack<int> pushAtBottom(stack<int> &myStack, int x) {
solve(myStack,x);
return myStack;
}