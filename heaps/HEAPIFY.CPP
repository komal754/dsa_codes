#include <iostream>
using namespace std;

// for 1 based indexing
//for maxheap

// void heapify(int arr[], int n, int i)
// {
//     int largest = i;

//     int left = 2 * i;
//     int right = 2 * i + 1;

//     if (left <= n && arr[largest] < arr[left])
//     {
//         largest = left;
//     }

//      if (right <=n && arr[largest] < arr[right])
//     {
//         largest = right;
//     }

//     // if updation occur in largest ele means if larger ele found
//     if (largest != i)
//     {
//         swap(arr[largest], arr[i]);
//         heapify(arr, n, largest);
//     }
// }

//for 0 based indexing
void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1; // Left child (0-based index)
    int right = 2 * i + 2; // Right child (0-based index)

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]); // Swap root with the largest element
        heapify(arr, n, largest); // Recursively heapify the affected sub-tree
    }
}

void heapSort(int arr[],int n){
    int size=n;

    while(size>1){
     swap(arr[1],arr[size]);
     size--;
    heapify(arr,size,1);
    }
}
int main()
{
    int arr[6] = {-1,70,55,45,60,50};
    int n = 5;

    //creation of heap

    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    for(int i=1;i<=n;i++)
    cout<<arr[i]<<" ";


    //sort the heap
     cout<<endl;
    heapSort(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}

