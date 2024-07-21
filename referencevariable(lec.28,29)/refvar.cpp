#include<iostream>
using namespace std;

int update(int n){
    n++;
}
int update2(int &n){
    n++;
}
int main(){

    // making reference variable
  /*   int i=9;
    int &j=i;
    i++;
    cout<<i<<" "<<j<<endl;
     j++;
    cout<<i<<" "<<j<<endl; */

// pass byb value:
/* int i=8;
update(i);
cout<<i;
update2(i);
cout<<i;
 */

/* char *ch=new char;
*ch='y';
cout<<*ch<<"  "<<sizeof(ch); */

int *a=new int[7];
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[n];
}

}