#include<iostream>
using  namespace std;


// 3 17 4
// 13
int main(){
int k,n,w;
cin>>k>>n>>w;
int total=0;
for(int i=1;i<=w;i++){
    total+=i*k;
}
// if(total>n)
//     cout<<total-n<<endl;
// else
//     cout<<0<<endl;

cout<<max(0,total-n)<<endl;


return 0;

}