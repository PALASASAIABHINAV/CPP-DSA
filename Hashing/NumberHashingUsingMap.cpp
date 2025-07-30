#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //pre computing
    map<int,int> mpp;
    for(int i=0;i<arr.size();i++){
        mpp[arr[i]]+=1;
    }
    int q;
    cout<<"Enter how many times you to do task:";
    cin>>q;
    while(q--){
        int a;
        cout<<"Enter the number:";
        cin>>a;
        cout<<mpp[a];
    }
    return 0;
}