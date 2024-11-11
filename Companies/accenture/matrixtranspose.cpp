#include<iostream>

using namespace std;

int main(){
    int rows,cols;
    cin>>rows>>cols;
    int matrix[rows][cols];

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
    }
       for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<"transpose:"<<endl;
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
    }

}