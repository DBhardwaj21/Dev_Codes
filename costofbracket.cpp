#include <bits/stdc++.h>
using namespace std;

int main() {


    int T;
    cin >> T;

    while (T--) {
        int n, k;
        string s;

        cin >> n >> k;
        cin >> s;

        vector<int> st;
        vector<pair<int,int>> pairs;

        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push_back(i);
            } else {
                if (!st.empty()) {
                    pairs.push_back({st.back(), i});
                    st.pop_back();
                }
            }
        }

        string ans(n, '0');

        int destroy = min(k, (int)pairs.size());

        for (int i = 0; i < destroy; i++) {
            ans[pairs[i].first] = '1';
        }

        cout << ans << '\n';
    }

    return 0;
}