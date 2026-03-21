#include<iostream>
using namespace std;
//  int main(){
//     int n;
//     cin>>n;
//     int factorial=1;
//     for ( int i=1; i<=n; i++){
//         factorial*=i;

//     }
//     cout<< factorial;

//  }/

// s2:-
int f(int n){
    if (n==1)return 1;

    return n*f(n-1);
}
int main(){
    int n;
    cin>>n;
     
    cout << f(n);
    return 0;
}