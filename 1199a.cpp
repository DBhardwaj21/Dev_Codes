#include<bits/stdc++.h>
using  namespace std;



int main(){
    int n,x,y;
    cin>>n>>x>>y;
    int ans=0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        bool flag=false;
        for(int j=max(0,i-x);j<i;j++){
            if(a[j]<=a[i])  flag=true;
        }
        for(int j=i+1;j<n && j<=i+y;j++){
            if(a[j]<=a[i])  flag=true;
        }
        if(!flag){
            cout<<i+1<<endl;
            return 0;
        }
    }
    
}