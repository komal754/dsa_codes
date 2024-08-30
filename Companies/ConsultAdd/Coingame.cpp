// //Problem Statement  :

// Raman was playing a game, he starts with x coins. Now in every step, he wins and loses 
// and he has to get the money or pay the money as needed. He came in contact with a psychic 
// who can see the future and the Psychic predicted the outcomes after each step. Now Raman 
// wants to start the game with the minimum wage where he doesn’t run out of money. Help Raman
//  to find what money he should start with. The only rule to keep playing is not going in a
//   credit situation

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int sum=0,ans=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<1){
            ans=-sum;
            sum=0;
        }
    }
    cout<<"ans= "<<ans;
    return 0;
}