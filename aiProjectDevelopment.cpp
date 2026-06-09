#include<bits/stdc++.h>
using  namespace std;



int main(){
int t;
cin>>t;
while (t--)
{
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    long long withoutAI=(n+(x+y)-1)/(x+y);
    long long ai;

    if(x*z>=n){
        ai=(n+x-1)/x;
    }
    else{
        long long rem=n-x*z;
        ai=z+(rem+(x+10*y)-1)/(x+10*y);
    }

    cout<<min(ai,withoutAI)<<endl;
    
    
}


return 0;
}