#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int> &arr,int n){
    for(int i=0;i<=n-2;i++){
       int  mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[mini],arr[i]);
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
    selection_sort(arr,n);
    for(auto it:arr){
        cout<<it<<" , ";
    }
    return 0;
}