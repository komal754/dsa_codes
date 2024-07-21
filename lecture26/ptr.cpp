#include<iostream>
#include<numeric>
using namespace std;

// int getSum(int arr[],int n){
// int sum=(accumulate(arr , arr+n , 0));
// return sum;
// }
int main(){

    // int arr[8]={0,1,1,1,12,3,3,4};
    // cout<<arr<<endl<<arr+2<<endl;
    // cout<<"sum from third position : " <<accumulate(arr+3,arr+8,0);
    //  int arr[10]={2,6,7};
    //  cout<<"address of first memory block"<<arr<<endl;
    //  cout<<"address of first memory block"<<&arr[0]<<endl;
    //  cout<<"value at first memory location"<<*arr<<endl;
    //  cout<<"value at third memory location +1"<<*arr+1<<endl;
    //  cout<<"value at 3rd location"<<*(arr + 2)<<endl;
    //  cout<<"2nd"<<*(arr + 1)<<endl;
    //  cout<<"3rd:"<<2[arr]<<endl;
    //  cout<<"3rd"<<*(2  + arr)<<endl;

//basic//
// int temp[10] ={1,2};
// cout <<sizeof(temp)<<endl;
// int *ptr=&temp[0];
// cout<<sizeof(ptr)<<endl;
// cout<<sizeof(*ptr)<<endl;
// cout<<temp<<endl;
// cout<<ptr<<endl;
// cout<<&ptr<<endl;
// cout<<*ptr<<endl;
// cout<<temp[0]<<endl;
// int temp[10] ={1,2};
// int *ptr=&temp[0];
// cout<<ptr<<endl;
// ptr=ptr+1;
// cout<<ptr<<endl;
// cout<<temp+1<<endl;
// cout<<&temp[1];
//   int value=5;
//   int *p=&value;
//   cout<<p<<endl;
//    cout<<*p<<endl;
//   p=p+1;
//     cout<<p<<endl;
//   cout<<*p<<endl;
//    *p = *p + 1;
//    cout << *p << endl;

// int val[5]={5,4,3,5,6};
// // int*ptr=val++;
// int *ptr=val;
// ptr=ptr+1;

// cout<<*ptr;

// int val=5;
// int *ptr=&val;
// // ptr=ptr+1;
// *ptr=*ptr+1 ;
// cout<<*ptr<<" "<<val;


/* int arr[4]={2,3,4,5};
int *ptr=arr;
cout<<ptr<<endl;
cout<<arr<<endl;
char ch[6]="komal";
char *p =ch;
cout<<p<<endl;
p++;
cout<<p<<endl; */
   
 /*   int num1=90;
   int *p=&num1;
   int **q=&p;
   int num2=++(**q);
   int *r=*q;
    ++(*r);
    cout<<num1<<"  "<<num2; */
      int num1=90;
   int *p=&num1;
   ++(p);   
   cout<<num1;
   return 0;
}