#include <iostream>
using namespace std;

// // s1 :-
// int main(){
//     int n;
//      cin>>n;
//     for ( int i=1; i<=n ; i++){
//         cout << i<< endl;
//     }

//  }
// // s2:-
// void f(int i, int n){
//     if (i>n) return;
//     cout<< i<< endl;
//     f(i+1,n);
// }


// int main(){
//     int n;
//      cin>>n;
//      f(1,n);

//  }

// s 3:-
void f(int count , int n){
    if(count>n)return ;
    cout<< count << endl;
    f(count+1,n);

}
int main()
{
    int n;
    cin >> n;
    int count = 1;
    f(count, n);
}