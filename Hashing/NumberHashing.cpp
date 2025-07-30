#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> arr(n);  

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // pre computing
    int hash[100000] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--) {
        int a;
        cout << "Enter the number to find: ";
        cin >> a;
        cout << hash[a] << endl;
    }

    return 0;
}
