#include<bits/stdc++.h>
using namespace std;
int majority_element(vector<int>& nums,int n){
    int count=0,count1=0;
    int element;
    for(int i=0;i<n;i++){
       if(count==0){
        count=1;
        element=nums[i];
       }else if(nums[i]==element){
        count++;
       }else{
        count--;
       }
    }

    for(int i=0;i<n;i++){
        if(nums[i]==element){
            count1++;
        }
    }
    if(count1>(n/2)){
        return element;
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
    cout<<majority_element(arr,n);
    
}