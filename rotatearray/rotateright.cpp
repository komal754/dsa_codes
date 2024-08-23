#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


////--------------------------------ROTATE BY K  POSITION TO RIGHT------------------------------------------------------//
/* 
void shift_arr(int *v,int n, int k) {
    k=k%n;
    vector<int>temp(k);

 //   storing  K no. of elements from last in temporary array
for(int i=0; i<k;i++)
{
    temp[i] = v[n-k+i];
}
//shifting array before kth position from last to ending
for (int i = n-1; i >=k; i--)
{
    v[i] = v[i-k];
}
// putting element from temp array to array at start
int index = 0;
for (int i=0;i<k;i++)
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


// ROTATE BY RIGHT BY K POSITION TO RIGHT(ALTERNATIVE METHOD/simple ):

 void reversearrByk(vector<int> &arr, int n, int k)
{
    k = k % n;
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
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
}



//alternate
// int n=nums.size();
// if(k>n){
//     k = k%n;
// }
// vector<int>temp(n);
// for(int i=0;i<n;i++){
// temp[i]=nums[(n-k+i)%n];
// }
// nums=temp;



//using reverse function 
void reversal(vector<int> &nums,int s,int e ){
    while(s<e){
     int temp=nums[s];
     nums[s]=nums[e];
     nums[e]=temp;
     s++;
     e--;
    }
}
    void rotate(vector<int>& nums, int k) {
k=k%nums.size();
        reversal(nums,0,nums.size()-1);
        reversal(nums,0,k-1);
        reversal(nums,k,nums.size()-1);

    }