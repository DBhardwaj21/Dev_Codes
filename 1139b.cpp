#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long max_sum = arr[n - 1];
    long long prev = arr[n - 1];
    for (long long i = n - 2; i >= 0; i--)
    {
        prev = min(arr[i], prev - 1);

        if (prev < 0)
        {
            prev = 0;
        }
        max_sum += prev;
    }
    cout << max_sum << endl;

    return 0;
}