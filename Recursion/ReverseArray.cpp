#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int l,int r,int n){
   if(l>r){
    return;
   }
   swap(arr[l],arr[r]);
   reverse(arr,l+1,r-1,n);
    
}
int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0,r=n-1;
    reverse(arr,l,r,n);
    cout<<"After Reverse:";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}