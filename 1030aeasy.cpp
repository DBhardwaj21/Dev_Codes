#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> s(n);
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i] == 1)
        {
            flag = true;
        }
    }

    if (flag)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }

    return 0;
}