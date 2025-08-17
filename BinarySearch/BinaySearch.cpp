#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &arr,int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        }else if(arr[mid]<x){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the target:";
    cin>>x;
    int k=binary_search(arr,n,x);
    cout<<k;
    return 0;
}