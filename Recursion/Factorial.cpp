#include<bits/stdc++.h>
using namespace std;
int fac(int n){
    if(n == 0 || n == 1) {
        return 1;
    }
    return n * fac(n - 1);
}
int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin>>n;
    if(n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }
    cout << "Factorial of " << n << " is: " << fac(n) << endl;
    return 0;

}
