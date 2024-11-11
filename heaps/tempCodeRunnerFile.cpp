#include <iostream>
using namespace std;

class Heap
{

public:
    int size;
    int arr[100];

    // constructor (alternate)
    Heap()
    {
        arr[0] = -1;
        size = 0; // size reinitialised
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index]) // condition for max heap heap that parent must
                                          // have greater value than child
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    void deletefromheap()
    {
        if (size == 0)
        {
            cout << "nothing to delete" << endl;
            return;
        }

        arr[1] = arr[size]; // swap first and last element
        size--;             // this will remove last element which was previous root ele
        int index = 1;

        // moving root to correct pos
        while (index < size)
        {

            int leftIndex = 2 * index;
            int rightIndex = 2 * index;

            if (leftIndex < size && arr[index] < arr[leftIndex])
            {
                swap(arr[leftIndex], arr[index]);
                index = leftIndex;
            }
            else if (rightIndex < size && arr[index] < arr[rightIndex])
            {
                swap(arr[rightIndex], arr[index]);
                index = rightIndex;
            }
            else
            {
                return;
            }
        }
    }
};
int main()
{

    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    cout << endl;
    // after deleting root or first ele:
    h.deletefromheap();
    h.print();
}