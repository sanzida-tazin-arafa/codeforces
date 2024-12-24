#include <bits/stdc++.h>
using namespace std;

int main() {
    int weight;
    int eachpart;
    cin>>weight;
    eachpart=weight/2;
    if(weight%2==0)
    {
        if(eachpart%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
