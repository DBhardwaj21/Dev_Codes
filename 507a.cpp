#include<bits/stdc++.h>
using  namespace std;



int main(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> a;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        a.push_back({x,i});
    }
    sort(a.begin(),a.end());
    vector<int> ans;
    for(auto it:a){
        if(k>=it.first){
            k-=it.first;
            ans.push_back(it.second);
        }
    }
    cout<<ans.size()<<endl;
    for(auto c:ans)
        cout<<c<<" ";

    
return 0;
}