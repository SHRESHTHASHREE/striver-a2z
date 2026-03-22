#include<bits/stdc++.h>
using namespace std;
 
////s1:-
// int main (){
    
    
  //    int n1=0, n2=1,n3,i;
  //   cout<<n1<<n2;
  //   for (i=1; i<=10; i++){
  //       n3=n1+n2;
  //       n1=n2;
  //       n2=n3;
  //       cout<<n3<<" ";
  //       ;
  //   }
  //   return 0;
  // }
  // s2:-
  int fibonacci(int n){
    if(n<=1){ return n;
    }
    int last= fibonacci(n-1);
    int slast=fibonacci(n-2);
    return last + slast;
  }




   int main(){
    int n;
    cin>> n;

    cout<<fibonacci(n)<<endl;
    return 0;

   }