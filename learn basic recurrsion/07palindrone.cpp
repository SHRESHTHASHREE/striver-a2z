#include<iostream>
using namespace std;

bool palindrone(int i, string s){
    if(i>=s.length()/2) return 1;

    if(s[i]!=s[s.length()-i-1]) return 0;

    return palindrone (i+1,s);

}



int main(){
    string s;
    
    cin>>s;
        
    cout << palindrone(0,s);
    return 0; 
    

}