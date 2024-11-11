#include<iostream>
#include<vector>
using namespace std;
int main(){
int rows,cols;
cout<<"enter rows and cols"<<endl;
cin>>rows>>cols;
//  vector<vector<int>>mat(rows,vector<int>(cols));
int mat[rows][cols];
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
       cin>>mat[i][j];
    }
}

for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
       cout<<mat[i][j];
    }
    cout<<endl;

}

}