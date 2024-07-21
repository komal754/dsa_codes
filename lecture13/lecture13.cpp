

#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e) {

       if (arr[mid] == key) {
           ans = mid;
           e = mid - 1;

        }
       else if (key > arr[mid]) {
           s = mid + 1;
       }
       else if (key < arr[mid]) {
           e = mid - 1;
       }
       mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e) {

        if (arr[mid]== key) {
            ans = mid;
            s = mid + 1;

        }
        else if (key > arr[mid]) {
            s = mid + 1;
        }
        else if (key < arr[mid]) {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int even[8] = { 1,9,8,0,9,7,1,9 };
    cout << "first occurence of 8 is" << firstOcc(even, 8, 1) << endl;
    cout << "last occurence of 8 is" << lastOcc(even, 8, 1) << endl;
    return 0;

}
