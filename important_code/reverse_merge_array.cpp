//reverse array
//merge array 

#include<iostream>
#include<vector>
using namespace std;
void input(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void print(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}

 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0, k = 0;
        vector<int> merge(m + n);
        while (i < m && j < n) {

            if (nums1[i] < nums2[j]) {
                merge[k++] = nums1[i++];
            } else {
                merge[k++] = nums2[j++];
            }
        }
        while (i < m) {
            merge[k++] = nums1[i++];
        }
        while (j < n) {
            merge[k++] = nums2[j++];
        }

         for (int p = 0; p < m + n; ++p) {
            nums1[p] = merge[p];
        }
    }
    
void reverseArray(vector<int> &arr, int m) {
    int s = m+1 ;
    int e = arr.size() - 1;
    while (s < e) {
        // swap(arr[s], arr[e]);
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;

        s++;
        e--;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    // int arr[n];
    vector<int>arr(n);
    input(arr,n);
    reverseArray(arr,m);
    print(arr,n);
}