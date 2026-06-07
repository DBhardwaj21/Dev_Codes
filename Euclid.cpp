#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using  namespace std;



int main(){
int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end(),greater<long long>());
    
    if(n==2){
        cout<<arr[0]<<" "<<arr[1]<<endl;
        continue;
    }
    bool flag=true;
    for(int i=0;i<n-2;i++){
        if(arr[i]%arr[i+1]!=arr[i+2]){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<arr[0]<<" "<<arr[1]<<endl;
        
    }else{
        cout<<-1<<endl;
        
    }

}
return 0;

}