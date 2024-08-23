// deque
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    deque<int> d;
    d.push_front(2);
    d.push_front(1);
    d.push_back(0);
    d.push_back(8);
    cout << "queue:: " << endl;
    cout<<"front"<<d.front()<<endl;
    cout<<"back"<<d.back()<<endl;
    while (!d.empty())
    {
        cout << d.front() << " ";
        d.pop_front();
    }
}