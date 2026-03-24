#include<bits/stdc++.h>
using namespace std;

void counting_sort( int arr[], int n){
    
}

int main(){
    int n;
    cin>> n;
    int arr[n];
    for ( int i=0; i<n ;i++) cin>> arr[i];
    counting_sort(arr, n);
    for (int i=0; i<n ;i++){
        cout << arr[i]<< " ";
    }
}