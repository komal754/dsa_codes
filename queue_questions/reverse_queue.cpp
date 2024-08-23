#include <bits/stdc++.h> 
#include<queue>
using namespace std;
queue<int> reverseQueue(queue<int> q)
{
    // Write your code here.
stack<int>s;
int size=q.size();

while(!q.empty()){
int ele=q.front();
q.pop();
s.push(ele);
}

while(!s.empty()){
int ele=s.top();
s.pop();
q.push(ele);
}
return q;
}
