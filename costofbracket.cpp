#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int T;
    cin >> T;

    while (T--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        vector<int> ko(n + 1), kc(n + 1);

        for (int i = 0; i < n; ++i) {
            ko[i + 1] = ko[i] + (s[i] == '(');
            kc[i + 1] = kc[i] + (s[i] == ')');
        }

        int tc = kc[n];
        int opt = n + 1;
        int p = 0;

        for (int i = 0; i <= n; ++i) {
            int v = ko[i] + tc - kc[i];

            if (v < opt) {
                opt = v;
                p = i;
            }
        }

        int d = min(k, opt);
        string ans(n, '0');

        for (int i = 0; i < p && d; ++i) {
            if (s[i] == '(') {
                ans[i] = '1';
                --d;
            }
        }

        for (int i = n - 1; i >= p && d; --i) {
            if (s[i] == ')') {
                ans[i] = '1';
                --d;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}