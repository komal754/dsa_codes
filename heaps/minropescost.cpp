#include<iostream>
#include<queue>
using namespace std;


long long connectropes(int *arr,int n){
int sum=0;
int ans=0;
  priority_queue < long long, vector<long long>, greater<long long> >pq;

for(int i=0;i<n;i++){
  pq.push(arr[i]);
}
while(pq.size()>1){
 int a=pq.top();
 pq.pop();
 int b=pq.top();
 pq.pop();
 sum=a+b;
pq.push(sum);
 ans+=sum;
}
return ans;
}
int main() {
  int n;
  cout << "Enter the number of ropes: ";
  cin >> n;

  int arr[n];
  cout << "Enter the lengths of the ropes: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  long long result = connectropes(arr, n);
  cout << "The minimum cost to connect all ropes is: " << result << endl;

  return 0;
}