#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
////--------------------------------ROTATE BY K  POSITION TO LEFT------------------------------------------------------//

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

// ROTATE BY LEFT BY K POSITION TO LEFT(ALTERNATIVE METHOD/simple ):
/* 
void reversearrByk(vector<int> &arr, int n, int k)
{
    k = k % n;
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
}
int main()
{
    int n, k;
    cout << endl;
    cout << "enter size of array : " << endl;
    cin >> n;
    cout << "enter value of k : " << endl;
    cin >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reversearrByk(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
} */
