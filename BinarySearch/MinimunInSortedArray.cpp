#include<bits/stdc++.h>
using namespace std;

int minimun_sorted_array(vector<int> &arr,int n){
    int low=0,high=n-1;
    int ans=INT_MAX;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[low]<=arr[mid]){
            ans=min(ans,arr[low]);
            low=mid+1;
        }else{
            ans=min(ans,arr[mid]);
            high=mid-1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=minimun_sorted_array(arr,n);
    cout<<x;
    return 0;
}