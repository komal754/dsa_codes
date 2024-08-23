#include<deque>
#include<iostream>
#include<vector>
using namespace std;
vector<int> firstNegative(vector<int> arr, int n, int k) {
	// Write your code here.
	vector<int>ans;
	deque<int>dq;

// process first window of k size

	for(int i=0;i<k;i++){
   if(arr[i]<0){
	   dq.push_back(i);
   }
	}
	//store the answer of first k size window

	if(dq.size()>0){
		ans.push_back(arr[dq.front()]);
	}
	else{
		ans.push_back(0);
	}

	//process for remaining windows
	for(int i=k;i<n;i++){
		if(!dq.empty() && i-dq.front()>=k){
			dq.pop_front();
		}
	

	//addition
	if(arr[i]<0){
		dq.push_back(i);
	}

	//ans store
        if (dq.size() >0) {
                ans.push_back(arr[dq.front()]);
        }
		else{
			ans.push_back(0);
		}
        }
		return ans;
}