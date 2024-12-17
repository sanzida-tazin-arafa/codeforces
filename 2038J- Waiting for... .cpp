#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, a, s=0;
    char c;
    cin>>t;
    cout<<endl;
    for(int x=1;x<=t;x++){
       cin>>c>>a;
       if(c=='P'){s=s+a;}
       else if(c=='B'){
        if(a>s){cout<<"YES"<<endl;s=0;}
        else{cout<<"NO"<<endl;s=s-a;}
       }

    }
}
