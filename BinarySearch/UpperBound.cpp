#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int> &arr,int n,int x){
    int low=0,high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>x){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }

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
    int k=lower_bound(arr,n,x);
    cout<<k;
    return 0;
}

//ub=upper_bound(arr.begin(),arr.end(),target)-arr.begin();