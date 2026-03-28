#include<bits/stdc++.h>
using namespace std;

vector <int>rotateby1(vector <int> &arr, int n){
    int temp=arr[0];
    for (int i=0; i<n-1;i++){
        arr[i]=arr[i+1];
        

    }
    arr[n-1]=temp;
    return arr;
}


int main(){
    int n;
    cin>> n;
    vector<int>arr(n);
    for (int i=0 ; i<n; i++){
        cin>> arr[i];
    }
    vector<int> ans =rotateby1(arr ,n);
    for (int i=0 ; i<n; i++)
    cout<< ans[i]<< " ";

}