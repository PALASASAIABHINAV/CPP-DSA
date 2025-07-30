#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    //pre computing
    int hash[256]={0};
    for(int i=0;i<s.length();i++){
        hash[s[i]]+=1;
    }
    int q;
    cin>>q;
    while (q--)
    {
        char c;
        cout<<"Enter the char";
        cin>>c;
        //fetch
        cout<<hash[c];
    }
    return 0;
    
}
