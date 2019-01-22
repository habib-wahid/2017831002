#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y,a,b,i=0;
    vector<int>gh,ve;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        gh.push_back(y);
    }
    cin>>m;
    while(m--)
    {
        cin>>a>>b;
        ve.push_back(a);
    }
    sort(gh.begin(),gh.end());
    sort(ve.begin(),ve.end());
    cout<<ve.back()<<endl;
    cout<<gh.front()<<endl;
   if(ve.back()<=gh.front())
    {
         cout<<i<<endl;
    }
    else
    {
        cout<<ve.back()-gh.front()<<endl;
    }

    return 0;
}
