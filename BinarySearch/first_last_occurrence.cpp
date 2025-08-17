#include<bits/stdc++.h>
using namespace std;
int last_occurrence(vector<int> &arr,int n,int x){
     int low=0,high=n-1;
     int ans=n;
     while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
     }
     return ans-1;
}
int first_occurrence(vector<int> &arr,int n,int x){
     int low=0,high=n-1;
     int ans=n;
     while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
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
    int x;
    cout<<"Enter the target:";
    cin>>x;
    int l=last_occurrence(arr,n,x);
    int f=first_occurrence(arr,n,x);
    if(f<n && arr[f]==x){
        cout<<f<<" "<<l;
    }else{
        cout<<-1<<" "<<-1;
    }
    return 0;
}