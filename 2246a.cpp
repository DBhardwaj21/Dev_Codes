#include<bits/stdc++.h>
using  namespace std;



int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n%2!=0)  return 0;
        vector<int> ans(n+1);
        int even=2;
        int odd=1;

        for(int i=1;i<=n;i++){
            if(i%2==1){
                ans[i]=even;
                even+=2;
            }
            else{
                ans[i]=odd;
                odd+=2;
            }
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}