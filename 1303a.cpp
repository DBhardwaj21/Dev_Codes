#include<bits/stdc++.h>
using  namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;

        int left = 0;
        int right = s.size() - 1;

        
        while (left < s.size() && s[left] == '0')
            left++;

       
        while (right >= 0 && s[right] == '0')
            right--;

        int ans = 0;

        if (left < right) {
            while (left <= right) {
                if (s[left] == '0')
                    ans++;
                left++;
            }
        }

        cout << ans << "\n";

    }
    return 0;

}