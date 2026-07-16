#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << 1 << endl;
        }
        else if (n == 2) {
            cout << -1 << endl;
        }
        else {
            vector<long long> res(n);

            res[0] = 1;
            res[1] = 2;

            long long ind = 3;

            for (int i = 2; i < n; i++) {
                res[i] = ind;
                ind *= 2;
            }

            for (int i = 0; i < n; i++) {
                cout << res[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}