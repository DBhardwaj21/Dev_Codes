#include<bits/stdc++.h>
using  namespace std;



int main(){

int t;
    cin >> t;

    vector<int> shift = {0, 1, 3, 6};

    while (t--) {
        int n;
        cin >> n;

        vector<int> ans;

        for (int s : shift) {
            for (int i = 0; i < n; i++) {
                ans.push_back(((i + s) % n) + 1);
            }
        }

        for (int x : ans) {
            cout << x << ' ';
        }
        cout << '\n';
    }

    return 0;
}