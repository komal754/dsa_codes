#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(7);
    q.push(8);
    cout << "size of queue " << q.size() << endl;
    cout << "front element : " << q.front() << endl
         << endl;
    cout << "list of element : " << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    cout << "size of queue " << q.size() << endl;

    if (q.empty())
    {
        cout << "list is empty " << endl;
    }
    else
    {
        cout << "list not empty " << endl;
    }
}