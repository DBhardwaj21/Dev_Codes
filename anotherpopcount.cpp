#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int cost = 1;
        int answer=0;
        int take;

        while (cost <= n)
        {
            take = min(k, n / cost);
            answer += take;
            n -= take * cost;
            cost *= 2;
        }
        cout<<answer<<endl;
    }
    
    
    return 0;
}