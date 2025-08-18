#include<bits/stdc++.h>
using namespace std;
long long nth_root(int N,int M){
    int low=1,high=M;
    int ans=-1;
    while(low<=high){
        long mid=(low+high)/2;
        long power=pow(mid,N);
        if(power==M){
            ans=mid;
            break;
        }else if(power>M){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;

}
int main(){
    int N,M;
    cin>>N>>M;
    long long x=nth_root(N,M);
    cout<<x;
    return 0;
}