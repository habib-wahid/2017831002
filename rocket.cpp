#include<bits/stdc++.h>
using namespace std;
const int maxn=100+10;
int p[maxn];
int main() {
	int n,m,x;
	cin>>m>>n;
	for(int i=0; i<n; i++) {
		cout<<1<<endl;
		cin>>x;
		if(x==0) return 0;
		p[i]=x;
	}
	int l=1,r=m;
	for(int i=0; i<300; i++) {
		int mid=(l+r)>>1;
		cout<<mid<<endl;
		cin>>x;
		if(x==0) return 0;
		if(x*p[i%n]==1)
			l=mid+1;
		else
			r=mid;
	}
	return 0;
}
