// p2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

    /*int n, i, j;
    cout << "enter value of n \n";
    cin >> n;*/
    /*  i = 1;
      while (i <= n) {
          j = 1;
          while (j <= n)
          {
              cout << j;
              j++;
          }
          cout << endl;
          i++;
      }*/
      //i = 1;
      //while (i <= n) {
      //    j = n;
      //    while (j > 0)
      //    {
      //        cout << j;
      //        j--;
      //    }
      //    cout << endl;
      //    i++;
      //}
     /* int n,a, i, j;
      cout << "enter value of n \n";
      cin >> n;
      i = 1;
      a = 1;
      while (i <= n) {
          j = 1;
          while (j<=n)
          {
              cout << a<<" ";
              j++;
              a++;

          }
          cout << endl;
          i++;
      }
  }*/
  //
  //    int n, a, i, j;
  //    cout << "enter value of n \n";
  //    cin >> n;
  //    i = 1;
  //    a = 1;
  //    while (i <= n) {
  //        j = 1;
  //        while (j<=i)
  //        {
  //            cout << a << " ";
  //            a++;
  //            j++;
  //            
  //
  //        }
  //        cout << endl;
  //        i++;
  //    }
  //}
  //    int n, a, i, j;
  //    cout << "enter value of n \n";
  //    cin >> n;
  //    i = 1;
  //    a = i;
  //    while (i <= n) {
  //        j = 1;
  //        while (j <= i)
  //        {
  //            cout <<j  << " ";
  //            j++;
  //            a--;
  //
  //           
  //
  //        }
  //        cout << endl;
  //        i++;
  //        a++;
  //    }
  //}
      /*int  a=4;
      cout << "~a" << ~a;*/


      //
   /* **fibonacci series:--->>
    int n, sum,a;
    cin >> n;
    a = 1;


        for (int i=1; i<=n;i++)
        {
            sum = a + b;

            cout << sum;
            a = b;
            b = sum;

        }

}

    */

//
////prime no.:**********to check  if th e no. is prime
//int main(){
//    int n, i;
//
//    cin >> n;
//    bool prime = 1;
//    for (i = 2; i < n; i++)    {
//        
//        if (n % i == 0)
//        {
//            prime = 0;
// break;
//
//        }
//    }
//    if (prime == 0)
//    {
//        cout << "it is not prime" << endl;
//    }
//    else {
//        cout << i << "is  prime" << endl;
//
//    }
//}

//bool prime(int n) {
//
//   
//
//    for (int i = 2; i < n; i++)
//    {
//        if (n == 0 || n == 1) return false;
//
//        if (n % i == 0) return false;
//    }
//    return true;
//    }
//
//int main()
//{
//    int N=100;
//    
//    for (int i = 0; i < N; i++)
//    {
//        if (prime(i))
//            
//
//        {
//            cout  << i <<" ";
//        }
//    }
//    return 0;
//}
//*************decimal to binary>>>>>>>>

//int main()
//{
//    int n,bit,ans,i;
//   cin >> n;
//   ans = 0;
//   
//  i= 0;
//   
//   while (n != 0) {
//       bit = n & 1;
//       ans = (bit * pow(10, i) ) + ans;
//       n=n >> 1;
//       i++;
//
//   }
//   cout << "answer is"<<ans;
//    
//}
//*****----->>>>>>to print reverse of number
//class Solution {
//public:
//
//    int reverse(int x) {
//
//        int ans = 0;
//
//        while (x != 0) {
//            int digit = x % 10;
//            ans = (ans * 10) + digit;
//            x = x / 10;
//        }
//        return ans;
//    }
//};


//**to print the complement of a no.
   /* class Solution {
    public:


        int bitwiseComplement(int n)
        {

            int m = n;
            int mask = 0;
            if (n == 0) {
                return 1;
            }
            while (m != 0) {
                mask = (mask << 1) | 1;
                m = m >> 1;
            }
            int ans = (~n) & mask;
            return ans;
        }
    };*/



//********-------->>>>>>switch case::
int main() {
    int num = 3;
    switch (num) {
    case 1:
        cout << "one";
    case 3:
        cout << "three";
    default:
        cout << "not defined";

    }
}