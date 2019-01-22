#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll int n,m,sum=0;
    cin>>n>>m;
    vector<ll int>v;
    for(ll int i=0;i<n;i++)
    {
        ll int j;
        cin>>j;
        v.push_back(j);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<=(n/2);i++)
    {
        if(v[i]>m){
            sum+=abs(m-v[i]);
        }
    }
    for(int i=(n/2);i<n;i++)
    {
        if(v[i]<m){
            sum+=abs(m-v[i]);
        }
    }
    cout<<sum<<endl;
}
