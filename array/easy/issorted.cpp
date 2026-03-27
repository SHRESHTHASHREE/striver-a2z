#include<bits/stdc++.h>
using namespace std;

// bool issorted(vector<int> &arr,int n){
//     for ( int i=0; i<n; i++){
//         for (int j=i+1; j<n; j++){
//             if(arr[j]<arr[i]){
//                 return 0;
//             }
//         }
//     }
//     return 1;

// }

bool issorted(vector<int> &arr,int n){
  for ( int i=1; i<n; i++){
    if(arr[i]<arr[i-1]){
        return 0;

    }
    else{
    }

  }
  return 1;
}
 
int main(){
    int n;
    cin>> n;
    vector<int> arr(n);
     for ( int i=0 ; i<n; i++){
        cin>> arr[i];
          }
    
    bool ans =issorted(arr,n);
    cout << ans;


   

}
