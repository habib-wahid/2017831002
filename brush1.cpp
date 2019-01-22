#include<bits/stdc++.h>
using namespace std;
#define V 100
int dist[V];
int mindistance(int dist[],bool sptset[])
{
    int min_=INT_MAX;
    int min_value;
    for(int i=0;i<V;i++)
    {
        if(sptset[i]==false && dist[i]<=min_)
        {
            min_=dist[i];
            min_value=i;
        }
    }
    return min_value;
}
int printsolution(int dist[],int dest)
{
    if(dist[dest-1]==INT_MAX)
        cout<<"Impossible"<<endl;
    else
        cout<<dist[dest-1]<<endl;
}
void  dijkstra(int graph[V][V],int src,int dest)
{
    bool sptset[V];
    for(int i=0;i<V;i++)
    {
        dist[i]=INT_MAX;
        sptset[i]=false;
    }
    dist[src]=0;
    for(int count_=0;count_<V;count_++)
    {
        int u=mindistance(dist,sptset);
        sptset[u]=true;
        for(int v=0; v<=V; v++)
        {
            if(!sptset[v] && graph[u][v] && dist[u]!=INT_MAX && dist[u]+graph[u][v]<dist[v])
            {
                dist[v]=dist[u]+graph[u][v];
            }
        }
    }
    printsolution(dist,dest);

}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++ )
    {
        int graph[V][V];
        int n,m;
        memset(graph, 0, sizeof(graph));
        cin>>n>>m;
        while(m--)
        {
            int u,v,w;
            cin>>u>>v>>w;
         if(graph[u-1][v-1]==0)
         {
             graph[u-1][v-1]=w;
             graph[v-1][u-1]=w;
         }
         else if(graph[u-1][v-1]!=0 && graph[u-1][v-1]>w)
         {
             graph[u-1][v-1]=w;
             graph[v-1][u-1]=w;

         }
        }
       cout<<"Case "<<i<<": ";
        dijkstra(graph,0,n);

    }
    return 0;
}


