#include <iostream>
#include <queue>

using namespace std;

int kthSmallest(vector<int> arr, int k)
{

    // creating maxheap
    priority_queue<int> maxheap;

    // push first k element to maxheap

    for (int i = 0; i < k; i++)
    {
        maxheap.push(arr[i]);
    }

    // checking condition if rest element smaller than top than pop top element and
    // push element

    for (int i = k; i < arr.size(); i++)
    {
        if (arr[i] < maxheap.top())
        {
            maxheap.pop();
            maxheap.push(arr[i]);
        }
    }
    return maxheap.top();
}

int kthLargest(vector<int> arr, int k)
{
    // creating minheap

    priority_queue<int, vector<int>, greater<int>> minheap;

    // push first k elements
    for (int i = 0; i < k; i++)
    {
        minheap.push(arr[i]);
    }

    // comparision
    for (int i = k; i < arr.size(); i++)
    {
        if (arr[i] > minheap.top())
        {
            minheap.pop();
            minheap.push(arr[i]);
        }
    }
    return minheap.top();
}

int main()
{
    cout << "enter size of array: ";
    int n, k;
    cin >> n;
    cout << "enter elements of array: " << endl;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "enter k" << endl;
    cin >> k;
    if(k>n){
        cout<<"Invalid Input Entered!!!!";
    }
    else{
    cout << "kth largest element is " << kthLargest(arr, k) << endl;
    cout << "kth smallest element is " << kthSmallest(arr, k) << endl;
}
}


