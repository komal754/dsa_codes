#include <bits/stdc++.h> 
using namespace std;

class Queue {
    int *arr;
    int size;
    int qfront;
    int rear;
public:
    Queue() {
        // Implement the Constructor
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    ~Queue() {
        // Implement the Destructor to free allocated memory
        delete[] arr;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() const {
        // Implement the isEmpty() function
        return qfront == rear;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if (rear == size) {
            cout << "Queue is full" << endl;
        } else {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if (isEmpty()) {
            return -1;
        } else {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            // Reset the queue if it becomes empty
            if (isEmpty()) {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front() const {
        // Implement the front() function
        if (isEmpty()) {
            return -1;
        } else {
            return arr[qfront];
        }
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    cout << q.front() << endl; // Should print 10
    cout << q.dequeue() << endl; // Should print 10
    cout << q.front() << endl; // Should print 20
    cout << q.dequeue() << endl; // Should print 20
    cout << q.dequeue() << endl; // Should print -1 (Queue is empty)

    return 0;
}
