#include<iostream>
#include<string>
using namespace std;

 string addStrings(string num1,string num2){
    int carry=0;
    int sum=0;
    int i=num1.size()-1;
    int j=num2.size()-1;
    string ans="";
    while(i>=0||j>=0||carry>0){
        int digit1=0,digit2=0;

        if(i>=0){
         digit1=num1[i]-'0';
         i--;
        }
        if(j>=0){
            digit2=num2[j]-'0';
            j--;
        }

        sum=digit1+digit2+carry;

        carry=sum/10;

        ans+=sum%10+'0';
    }
    int n=ans.size();
    for(int k=0;k<n/2;k++){
      char temp=ans[k];
      ans[k]=ans[n-k-1];
      ans[n-k-1]=temp;
    }
    return ans;
}

int main(){
    string num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;

    cout<<"Enter the second number: ";
    cin>>num2;

 cout<<"The sum of the two numbers is: "<<addStrings(num1,num2)<<endl;
 
 return 0;
}