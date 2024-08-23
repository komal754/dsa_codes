/* #include<iostream>
#include<algorithm> */
// using namespace std;

// 
// 
// 
// ........................................ROTATE BY ONE.....................................................
/* void rotate(int* a, int n) {

   int temp = a[0];
   for (int i = 1; i < n; i++) {
       swap(a[i], a[i - 1]);
   }
   a[n - 1] = temp;

}                                         //12345
int main() {

   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++) {
       cin >> arr[i];
   }
   rotate(arr, n);
   for (int i = 0; i < n; i++) {
       cout << arr[i];
   }
}
 */


////--------------------------------ROTATE BY K  POSITION------------------------------------------------------//
/* #include<iostream>
#include<vector>
void shift_arr(int *v,int n, int k) {
    k=k%n;
	int temp[k] = {0};

 //   storing array till kth position in temporary array
for(int i=0; i<k;i++)
{
	temp[i] = v[i];
}

//shifting array after kth position to starting
for (int i = k; i < n; i++)
{
    int index=0;
	v[i-k] = v[i];
}

// putting element from temp array to array at last 
int index = 0;
for (int i=n-k;i<n;i++)
{
	v[i] = temp[index];
	index++;
}
}

int main() {

   int n,k;
   cout<<endl;
   cout<<"enter size of array : "<<endl;
   cin >> n;
   cout<<"enter value of k : "<<endl;
   cin>>k;
   
   int arr[n];
   for (int i = 0; i < n; i++) {
       cin >> arr[i];
   }
   shift_arr(arr,n,k);
   for (int i = 0; i < n; i++) {
       cout << arr[i]<< " ";
   }
}
 */
//................................................ALTERNATE FOR ROTATE BY K POSITION BY USING DOUBLE REVERSAL---------------------------------
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


void reverse(vector<int>&arr, int k, int n)
{
    int l = k;
    int h = n - 1;
    int temp;

    while (l <= h) {
        temp = arr[l];
        arr[l] = arr[h];
        arr[h] = temp;
        l++;
        h--;
    }
}
int main() {
    int n;
    cin >> n;
    vector<int>arr;
    int k;
    cin >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    reverse(arr, 0, k);
    reverse(arr, k, n);
    reverse(arr, 0, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
}   