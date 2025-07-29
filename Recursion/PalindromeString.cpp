#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s,int i){
    if(i>=s.length()/2){
        return true;
    }
    if(s[i]!=s[s.length()-i-1]){
        return false;
    }
    return palindrome(s,i+1);
}
int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    int i=0;
    bool isPalindrome=palindrome(s,i);
    if(isPalindrome)
    cout<<"Correct";
    else
    cout<<"Not";

    return 0;
}