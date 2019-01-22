#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,k,a=0;
        string str;
        cin>>n>>k;
        for(int i=65;i<65+n;i++)
        {
            str.push_back(char(i));
        }
        cout<<"Case "<<i<<":"<<endl;
        do {
       cout << str << endl;
       a++;
       if(a==k)
        break;
    } while (next_permutation(str.begin(), str.end()));
    a=0;
    }
    return 0;
}
