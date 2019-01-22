#include<bits/stdc++.h>

using namespace std;

void binary_search(int A[],int N,int item)
{
	int l,u,m;
	l=0;
	u=N-1;
	while(l<=u)
	{
		m=(u+l)/2;
		if(item==A[m])
		{
		    while(item==A[m] && m>=0)
            {
                m--;
            }
        cout<<"found"<<" "<<"at"<<" "<<m+2<<endl;
        return;
		}
		else if(item>A[m])
		{
			l=m+1;
		}
		else if(item<A[m])
		{
			u=m-1;
		}
	}
	cout<<"not found"<<endl;
}
int main()
{
	int  N,i,K,j=0,y;

	while(cin>>N>>K)
	{
		if(N==0 && K==0)
		{
			break;
		}
		int A[N],B[K];
	for(i=0;i<N;i++)
	{
		cin>>A[i];
	}
	for(y=0;y<K;y++)
	{
		cin>>B[y];
	}
	sort(A,A+N);
	cout<<"CASE#"<<" "<<j+1<<":"<<endl;
	for(i=0;i<K;i++)
	{
	cout<<B[i]<<" ";
	binary_search(A,N,B[i]);
    }
    j++;
}
	return 0;
}
