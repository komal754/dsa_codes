#include <bits/stdc++.h>

class Deque {
public:
    int *arr;
    int front;
    int rear;
    int size;
    int count;

public:
    // Initialize your data structure.
    Deque(int n) {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
        count = 0;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x) {
        if (isFull()) {
            return false;
        } else if (isEmpty()) {
            front = rear = 0;
        } else if (front == 0) {
            front = size - 1;
        } else {
            front--;
        }
        arr[front] = x;
        count++;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x) {
        if (isFull()) {
            return false;
        } else if (isEmpty()) {
            front = rear = 0;
        } else if (rear == size - 1) {
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = x;
        count++;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront() {
        if (isEmpty()) {
            return -1;
        }
        int ans = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0;
        } else {
            front++;
        }
        count--;
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear() {
        if (isEmpty()) {
            return -1;
        }
        int ans = arr[rear];
        if (front == rear) {
            front = rear = -1;
        } else if (rear == 0) {
            rear = size - 1;
        } else {
            rear--;
        }
        count--;
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront() {
        if (isEmpty()) {
            return -1;
        }
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear() {
        if (isEmpty()) {
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty() {
        return count == 0;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull() {
        return count == size;
    }

    ~Deque() {
        delete[] arr;
    }
};

/**
 * Your Deque object will be instantiated and called as such:
 * Deque* obj = new Deque(k);
 * bool param_1 = obj->pushFront(value);
 * bool param_2 = obj->pushRear(value);
 * int param_3 = obj->popFront();
 * int param_4 = obj->popRear();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */

int main() {
    Deque* obj = new Deque(5);
    std::cout << obj->pushRear(10) << std::endl; // True
    std::cout << obj->pushRear(20) << std::endl; // True
    std::cout << obj->pushFront(30) << std::endl; // True
    std::cout << obj->getFront() << std::endl; // 30
    std::cout << obj->popRear() << std::endl; // 20
    std::cout << obj->popRear() << std::endl; // 10
    std::cout << obj->popFront() << std::endl; // 30

    delete obj;
    return 0;
}
