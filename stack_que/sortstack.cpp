#include <bits/stdc++.h>
using namespace std;

void insertSortedly(stack<int> &stack, int num) {
    // If the stack is empty or the top element is less than the number to be inserted, push the number
    if (stack.empty() || stack.top() < num) {
        stack.push(num);
        return;
    }
    // Pop the top element and recursively call insertSortedly
    int n = stack.top();
    stack.pop();
    insertSortedly(stack, num);
    // Push the popped element back onto the stack
    stack.push(n);
}

void sortStack(stack<int> &stack) {
    // If the stack is empty, return
    if (stack.empty()) {
        return;
    }
    // Pop the top element, sort the remaining stack, and then insert the popped element in sorted order
    int num = stack.top();
    stack.pop();
    sortStack(stack);
    insertSortedly(stack, num);
}

int main() {
    stack<int> s;
    s.push(34);
    s.push(3);
    s.push(31);
    s.push(98);
    s.push(92);
    s.push(23);

    sortStack(s);

    cout << "Sorted stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
