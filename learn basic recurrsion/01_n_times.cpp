#include<iostream>
using namespace std;
    
// void print (string name, int n){
//     if (n==0) return ;
//     cout<< name << endl;

//     print ( name,  n-1 );
    

// }

// int main(){
//     int n;
//     cin>> n;
//     string name = "hey";
//     print( name ,n);
//     }

void f(int i,int n){
    if (i>n) return ;
     cout << "hey"<< endl;
     f(i+1,n);

}

int main ( ){
    int n;
    cin>> n;

    f ( 1,n);

}

