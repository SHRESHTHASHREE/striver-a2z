#include<bits/stdc++.h>
using namespace std;

int f(int number,int a[]){
    int count =0;
    for ( int i=0; i<5 ;i++){
        if (a[i]==number){
            count++;
        }
    }
    return count;
}


int main(){

    int a[6]={2,1,3,2,3,4};
    
        int number;
        cin>>number;

        cout << f (number ,a);
    }

// //s2:-
// int main(){
//     int n;
//     cin>> n;
//     int arr[n];
//     for ( int i=0; i<n;i++){
//         cin>> arr[i];
//     }
//     int hash[13]={0};
//     for (int i=0; i<n;i++){
//         hash[arr[i]]+=1;
//     }

//   int q;
//     cin>>q;
//     while (q--){
//         int number;
//         cin>> number;
//         cout<< hash[number]<< endl;

//     }
//     return 0;
// }

//s3:-
void  f(int arr[], int n){
    unordered_map<int , int> map;

    for (int i=0; i<n; i++){
        map[arr[i]]++;

    }
    for (auto x:map){
        cout << x.first << " "<< x.second<< endl;
    }

}
int main(){
    int arr[]={1,2,3,2,1,2,3,3,3,3};
    int n=sizeof(arr) / sizeof(arr[0]);
    f(arr,n);
    return 0;
}





//character array
// //s1:-
// int main(){
//     string s="absdacsa";

//     int hash[26]={0};

//     for (int i=0 ;i<s.size();i++){
//         hash[s[i]-'a']++;
//     }
    
//     int q;
//     cin>>q;
//     while (q--){
//     char c;
//     cin>> c;

//     cout << hash[c-'a']<< endl;
//     }
// }
//s2
int main(){
    string s="absdacsa";

    int hash[256]={0};

    for (int i=0 ;i<s.size();i++){
        hash[s[i]]++;
    }
    
    int q;
    cin>>q;
    while (q--){
    char c;
    cin>> c;

    cout << hash[c]<< endl;
    }




}