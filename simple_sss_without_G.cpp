#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fun(ll x,ll a0,ll a1)
{
    return a0+a1*x;
}

int main()
{
    string s;
    cin>>s;
    vector<vector<pair<int,int>>>v(4,vector<pair<int,int>>(s.size()));
    for(int i=0;i<s.size();i++)
    {
        ll a1=rand()%100,o=s[i];
        for(int j=0;j<4;j++)
        {
            ll x=rand()%100;
            ll y=fun(x,o,a1);
            v[j][i]={x,y};
        }
    }
    string ans;
    for(int i=0;i<s.size();i++)
    {
        ll xi0=v[1][i].first,xi1=v[2][i].first,yi0=v[1][i].second,yi1=v[2][i].second;
        ans+=char(((yi1*xi0)-(yi0*xi1))/(xi0-xi1));
    }
    cout<<ans;
}
