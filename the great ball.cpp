#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,x,y;
    vector<int>ch,gh;
    cin>>k;
    while(k--)
    {
        cin>>n;
        while(n--)
        {
            cin>>x>>y;
            ch.push_back(x);
            gh.push_back(y);
        }
        sort(ch.begin(),ch.end());
        sort(gh.begin(),gh.end());
      for(int i=0;i<gh.size();i++)
      {
        if(gh[i]<ch.back())
        {
            gh.erase(gh.begin()+(++i));
        }
      }
    cout<<gh.size()<<endl;
    ch.clear();
    gh.clear();
    }
    return 0;
}
