#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&inputStack,int count,int size){
//base case
if(count==size/2){
inputStack.pop();
return;
}

//saving the top element in num
int num=inputStack.top();
inputStack.pop();


//recursive call
solve(inputStack,count+1,size);

//put back num in stack

inputStack.push(num);

}
void deleteMiddle(stack<int>&inputStack, int N){
int count=0;
solve(inputStack,count,N);
}