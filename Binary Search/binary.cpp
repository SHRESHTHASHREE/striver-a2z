#include <bits/stdc++.h>
using namespace std;

void binary_search(vector <int> &arr, int n ,int target){

    int low=0;
    int high=n-1;

    while (low<=high){
        int mid=(low+high)/2;
        if (arr[mid]==target)
            return arr[mid];
        
        else if(arr[mid]<target) low=mid+1;
        else high=mid-1; 

    }

}


int main( ){
    int n;
    cin>> n;

    binary_search(arr,n)


}