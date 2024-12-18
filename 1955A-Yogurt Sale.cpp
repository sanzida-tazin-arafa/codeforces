#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, n, a, b, r1;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>a>>b;
        if(2*a<=b)
        {
            cout<<n*a<<endl;
        }
        else
        {
            if(n%2==0)
            {
                cout<<(n/2)*b<<endl;
            }
            else
            {
                cout<<((n/2)*b)+a<<endl;
            }
        }
 
    }
}
