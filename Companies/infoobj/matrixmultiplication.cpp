#include<iostream>
using namespace std;


int main(){
    int row1,col1,row2,col2;
    int mat1[row1][col1],mat2[row2][col2];
    cout<<"rows for matrix 1";
    cin>>row1;
    cout<<"columns for matrix 1";
    cin>>col1;
    cout<<"rows for matrix 2";
    cin>>row2;
    cout<<"columns for matrix 2";
    cin>>col2;

    if(col1!=row2){
        cout<<"invalid data";
        return 0;
    }
}