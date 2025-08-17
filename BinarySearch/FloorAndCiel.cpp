#include<bits/stdc++.h>
using namespace std;
int floor(vector<int> &arr,int n,int x){
   int low=0,high=n-1;
   int ans=-1;
   while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]<=x){
        ans=mid;
        low=mid+1;
    }else{
        high=mid-1;
    }
   }
   return ans;
}
int ciel(vector<int> &arr,int n,int x){
   int low=0,high=n-1;
   int ans=-1;
   while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]>=x){
        ans=mid;
        high=mid-1;
    }else{
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
    int f=floor(arr,n,x);
    int c=ciel(arr,n,x);
    cout<<f<<" "<<c;
    return 0;
}

