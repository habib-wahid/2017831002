#include<cstdio>
int n,t=1,m;
long long b,sum,a[200005];
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i) scanf("%lld",&a[i]);
	for(int i=1;i<=m;++i){
		scanf("%lld",&b);
		while(sum+a[t]<b) sum+=a[t++];
		printf("%d %lld\n",t,b-sum);
	}
}
