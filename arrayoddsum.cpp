#include<bits/stdc++.h>
 
using namespace std;
 
int a[200000];
int main() {
    int t;
    cin >> t;
    while(t --) {
        int n;
        cin >> n;
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] & 1) odd++;
            else even++;
        }
        if (odd == 0 or (even == 0 and n % 2 == 0)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}