#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long n, d;
        cin >> n >> d;

        vector<long long> arr(n);
        for (auto& x : arr) cin >> x;

        vector<long long> group(2 * n + 1, 0);
        for (int i = 0; i < 2 * n; i++)
            group[i + 1] = group[i] + arr[i % n];

        long long ans = 0;
        for (int i = 0; i < n; i++) {
        
            int l = ((i - d) % n + n) % n;
            long long wind;
            if (l + 2 * d + 1 <= 2 * n)
                wind = group[l + 2 * d + 1] - group[l];
            else
                wind = group[2 * n] - group[l] + group[(l + 2 * d + 1) - 2 * n];

            long long Vi = wind - arr[i];        
            long long w = 2 * d * arr[i] - Vi;   
            ans += abs(w);
        }

        cout << ans / 2 << endl;
    }

    return 0;
}