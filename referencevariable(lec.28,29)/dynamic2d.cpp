#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;

//creating 2d array
/* int **arr=new int*[n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cin>>arr[i][j];
    }
}
cout<<endl;

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cout<<arr[i][j];
    }
    cout<<endl;
}
int n;
cin>>n;
 */
//creating 2d array diff row and col:
int row,col;
cin>>row>>col;
int **arr=new int*[row];
for(int i=0;i<row;i++){
    arr[i]=new int[col];
}
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
    cin>>arr[row][col];
    }
}
cout<<endl;

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
    cout<<arr[row][col];
    }
    cout<<endl;
}
}