#include <bits/stdc++.h>
#include <stack>
using namespace std;

// Function to push an element to the bottom of a stack using recursion
void solve(stack<int> &myStack, int element) {
    if (myStack.empty()) {
        myStack.push(element);
        return;
    }
    int num = myStack.top();
    myStack.pop();

    solve(myStack, element);

    myStack.push(num);
}

// Function to reverse a stack using recursion
void reverseStack(stack<int> &myStack) {
    if (myStack.empty()) {
        return;
    }
    int num = myStack.top();
    myStack.pop();

    reverseStack(myStack);

    solve(myStack, num);
}

int main() {
    stack<int> myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    reverseStack(myStack);

    // Printing the reversed stack to verify
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }

    return 0;
}
