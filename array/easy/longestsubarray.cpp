#include<bits/stdc++.h>
using namespace std;


int longestsubarry(vector<int>&arr, int n){

    for ( int i=0 ; i<n;i++){
        for(int j=i;j<n;j++){
            int s=0;
            for (int k=i; k<=j;k++){
                s+=arr[k];
                 if(s==k)

            }
           
        }
    }
}

int main(){
    int n;
     cin>> n;
    vector<int> arr(n);

    for (int i=0;i<=n ; i++){
        cin>> arr[i];
    }
    int ans=longestsubarry(arr,n);

    


}