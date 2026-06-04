#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;
    
    string result;
    while (n > 0) {
        int d = n % 10;
        result += char('0' + std::min(d, 9 - d));
        n /= 10;
    }
    
    // Reverse to get correct order
    reverse(result.begin(), result.end());
    
    // Handle leading zero
    if (!result.empty() && result[0] == '0') {
        result[0] = '9';
    }
    
    cout << result;
    
    return 0;
}