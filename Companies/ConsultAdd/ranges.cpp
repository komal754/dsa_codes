#include<iostream>
using namespace std;
int main(){
std::cout<<"enter no. of elements: "<<endl;
int ele;
std::cin>>ele;

std::cout<<"enter no. of ranges: "<<endl;
int ranges;
std::cin>>ranges;

std::cout<<"enter  elements"<<endl;
int arr[ele];
for(int i=0;i<ele;i++ ){
    std::cin>>arr[i];
    }

int l,u;
std::cout<<"enter range: "<<endl;
for(int i=0;i<ranges;i++)
{
    int c=0;

std::cout<<"enter lower limit: "<<endl;
std::cin>>l;
std::cout<<"enter upper limit: "<<endl;
std::cin>>u;
for(int j=0;j<ele;j++){
    if(arr[j]>=l && arr[j]<=u){
        c++;
    }
}
    cout<<"no. of elements in ranges: "<<c<<endl;
}

return 0;
}


