#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n, p[100000], i, c=1;
    cin>>n;
    for(i=0;i<n;i++)
    {
       cin>>p[i];
    }
    for(i=0;i<n-1;i++)
    {
       if(p[i]!=p[i+1])
       {
           c++;
       }
    }
    cout<<c;
    return 0;
}
