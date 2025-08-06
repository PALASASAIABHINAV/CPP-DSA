#include<bits/stdc++.h>
using namespace std;
int maximum_subarray(vector<int>& nums,int n){
    long long sum=0,maxi=LONG_MIN;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}
int main(){
    int n;
    cout<<"Enter the size";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maximum_subarray(arr,n);
    return 0;
}