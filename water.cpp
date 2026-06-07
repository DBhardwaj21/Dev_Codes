#include <bits/stdc++.h>
using namespace std;

int main() {


    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> h(n);
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        for (int l = 0; l < n; l++) {

            vector<long long> w(n), w1(n), w2(n);

            for (int i = 0; i < n; i++) {
                w[i] = h[(l + i) % n];
            }

            w1[0] = w[0];
            for (int i = 1; i < n; i++) {
                w1[i] = max(w1[i - 1], w[i]);
            }

            w2[n - 1] = w[n - 1];
            for (int i = n - 2; i >= 0; i--) {
                w2[i] = max(w2[i + 1], w[i]);
            }

            long long res = 0;

            for (int i = 1; i < n; i++) {
                res += min(w1[i - 1], w2[i]);
            }

            cout << res << " ";
        }

        cout << "\n";
    }

    return 0;
}