#include<bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int> &arr,int n){
    for(int i=0;i<=n-2;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
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
    bubble_sort(arr,n);
    for(auto it:arr){
        cout<<it<<" , ";
    }
    return 0;
}