#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        v.push_back(j);
    }
    for(int k=0;k<v.size();k++)
    {
        //cout<<"running"<<endl;
        if(v[k]==1 && v[k+1]==0 && v[k+2]==1)
        {
            cnt++;
            k+=2;
        //cout<<"running";
        }
    }
    cout<<cnt<<endl;
}
