#include<bits/stdc++.h>
using namespace std;
void swap1(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int  partition1(vector<int>ve,int low,int high)
{
    int piv=ve[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++)
    {
        if(ve[j]<=piv)
        {
            i++;
            swap1(&ve[i],&ve[j]);
        }
    }
     swap1(&ve[i+1],&ve[high]);
     return (i+1);
}
void quicksort(vector<int>ve,int low,int high)
{
    if(low<high)
    {
        int pi=partition1(ve,low,high);
        quicksort(ve,low,pi-1);
        quicksort(ve,pi+1,high);
    }
}
int main()
{
    vector<int>ve;
    int l,x,n;
    cin>>n;
    for(l=0;l<n;l++)
    {
        cin>>x;
        ve.push_back(x);
    }

    quicksort(ve,0,n-1);
    for(int k=0;k<n;k++)
    {
        cout<<ve[k]<<endl;
    }
    return 0;
}
