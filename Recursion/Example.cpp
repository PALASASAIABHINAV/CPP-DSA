#include<iostream>
using namespace std;

void fun(int n){
    if(n>0){
        cout << n << " ";
        fun(n-1);
    }
}

int main(){
    int n;
    cout << "Enter a integer: ";
    cin >> n;
    cout << "You entered: " << n << endl;
    fun(n);
    return 0;

}