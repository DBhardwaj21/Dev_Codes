#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long solve(long long num1, long long num2) {
    long long res = 1;
    num1 %= MOD;
    while (num2 > 0) {
        if (num2 & 1)
            res = res * num1 % MOD;
        num1 = num1 * num1 % MOD;
        num2 >>= 1;
    }
    return res;
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long n, m, r, c;
        cin >> n >> m >> r >> c;

        long long num1ns = (r - 1) * m + (n - r + 1) * (c - 1);

        cout << solve(2, num1ns) <<endl;
    }

    return 0;
}