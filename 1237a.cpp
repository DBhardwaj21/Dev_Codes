#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int flag = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a % 2 == 0) {
            cout << a / 2 << "\n";
        } else {
            if (flag == 0) {
                cout << (int)ceil((double)a / 2) << "\n";
            } else {
                cout << (int)floor((double)a / 2) << "\n";
            }
            flag = 1 - flag; 
        }
    }
    return 0;
}