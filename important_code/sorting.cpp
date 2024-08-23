#include <iostream>
using namespace std;

void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void selectionSort(int arr[], int n)
{
    int minIndex = 0;
    for (int i = 0; i < n; i++)
    {
        minIndex=i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            swap(arr[minIndex],arr[i]);
        }
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    selectionSort(arr,n);
    print(arr,n);

}