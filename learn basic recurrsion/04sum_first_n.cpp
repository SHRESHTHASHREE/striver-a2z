#include <iostream>
using namespace std;


// // s1:-
// int main(){
//     int n;
//     cin>> n;
//     int count =0;

//     for (int i=1; i<=n ; i++){
//         count+=i;
      

//     }
//       cout << count ;

// }
//s2:-

int  f( int n ){
    if(n==0) return 0;

    return n+ f(n-1);

}
int main(){
    int n;
    cin>> n;

    cout<< f(n);
    return 0;
}