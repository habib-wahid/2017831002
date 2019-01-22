#include<bits/stdc++.h>
using namespace std;
int is_prime(unsigned long long int n)
{
    unsigned long long int j;
    int root;
    if(n==2)
    {
        return 1;
    }
    if(n%2 == 0)
    {
        return 0;
    }
    root=sqrt(n);
    for(j=3;j<=root;j=j+2)
    {
        if(n%j == 0)
        {
            return 0;
        }
    }
    return 1;
}
int is_digitprime(unsigned long long int k)
{
    while(k>0)
    {
        int b=k%10;
        if(b==2 || b==3 || b==5 || b==7)
        {
            k=k/10;
        }
        else
    {
        return 0;
    }
    }
    if(k==0)
        return 1;
}
int main()
{
    int t;
    unsigned long long int n,i,a,j;
    vector<unsigned long int>ch,gh;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=2;i<n;i++)
        {
            if(is_prime(i)==1)
            {
                ch.push_back(i);
            }
        }

        for(j=0;j<ch.size();j++)
        {
            //cout<<ch[j]<<endl;
           if(is_digitprime(ch[j])==1);
           {
               gh.push_back(ch[j]);
               cout<<gh[j]<<endl;
           }
        }
        //cout<<gh.back()<<endl;
        ch.clear();
        gh.clear();
    }
    return 0;
}

