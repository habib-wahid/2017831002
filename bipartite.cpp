#include<bits/stdc++.h>
using namespace std;
bool isbipartite(vector<int>ch[],int n,int src)
{
    int color[n+2];
    memset(color,-1,sizeof(color));
    queue<int>q;
    color[src]=1;
    q.push(src);
    while(!q.empty())
    {
        int a=q.front();
        q.pop();

        for(int i=0;i<ch[a].size();i++)
        {
            if(ch[a][i]==a)
                return false;
            if(ch[a][i] && color[ch[a][i]]==-1)
            {
                color[ch[a][i]]=1-color[a];
                q.push(ch[a][i]);
            }
          else  if(ch[a][i] && color[ch[a][i]] == color[a])
                return false;
        }
    }
    return true;
}
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int>ch[n+1];
    while(e--)
    {
        int u,v;
        cin>>u>>v;
        ch[u].push_back(v);
        ch[v].push_back(u);
    }
    bool bk =isbipartite(ch,n,0);
    if(bk==true)
        cout<<"the graph is bipartite"<<endl;
    else
        cout<<"the graph is not bipartite"<<endl;
    return 0;
}
