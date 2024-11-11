#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

for(int i=0;i<n;i++){

    // print spaces
    for(int j=0;j<n-i-1;j++){
cout<<" ";
    }

    for(int j=i+1;j<=2*i+1;j++){
        cout<<j;
    }

    for(int j=2*i;j>=i+1;j--){
        cout<<j;
    }
    cout<<endl;
}

    return 0;
}
