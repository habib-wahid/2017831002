#include <bits/stdc++.h>
using namespace std;
long long a[200005],n,ans;
int main()
{
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    long long i=0,j=n-1,left=0,right=0;
    while(i<=j){
        if(left < right) left+=a[i++];
            else   right+=a[j--];
        if(left == right)
            ans=max(ans,left);
    }
    cout<<ans;
}
