#include<bits/stdc++.h>
using  namespace std;



int main(){
    int n,k;
    cin>>n>>k;
    int timeleft=240-k;
    // int cnt=0;
    // int solved=0;
    // for(int i=1;i<=n;i++){
    //     solved+=5*i;
    //     if(solved<=timeleft){
    //         cnt++;
    //     }
    //     else{
    //         break;
    //     }
    // }
    int l=0,h=n;
    int ans=0;
    while(l<=h){
        int mid=l+(h-l)/2;
        int reqt=5*mid*(mid+1)/2;
        if(reqt<=timeleft){
            ans=mid;
            l=mid+1;
        }
        else{
            h=mid-1;
        }

    }

    cout<<ans<<endl;

return 0;

}