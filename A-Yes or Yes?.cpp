#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    string s;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>s;
        if(s.length()==3)
        {
            if((s[0]=='Y'||s[0]=='y')&&(s[1]=='E'||s[1]=='e')&&(s[2]=='S'||s[2]=='s'))
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
    }
}
