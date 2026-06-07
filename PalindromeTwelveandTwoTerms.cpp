#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(long long x) {
    string s = to_string(x);
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        bool found = false;

        
        if (n < 22) {
            for (long long a = 0; a <= n; a++) {
                long long b = n - a;

                if (isPalindrome(a) && b % 12 == 0) {
                    cout << a << " " << b << "\n";
                    found = true;
                    break;
                }
            }
        } else {
            long long rem = n % 12;

            long long a;
            if (rem <= 9)
                a = rem;
            else if (rem == 10)
                a = 22;
            else
                a = 11;

            long long b = n - a;

            if (b >= 0 && b % 12 == 0) {
                cout << a << " " << b << "\n";
                found = true;
            }
        }

        if (!found)
            cout << -1 << "\n";
    }

    return 0;
}