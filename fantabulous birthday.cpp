#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ch,p,q;
    cin>>ch;
    float a,c;
    a=sqrt(ch);
   int b=ceil(a);


        if(b%2 == 1)
        {
            p=b;
            q=1;
            for(int i=(b-1)*(b-1)+1;i<=b*b;i++)
        {
             if(i == ch)
            {
                cout<<p<<" "<<q<<endl;
                break;
            }


            if(i != ch)
            {
                q++;
                if(q>b)
                {
                   p=b-1;
                   q=b;

                }
                if(p!=0)
                {
                    p--;
                }

            }

        }
        }
        else
        {
            p=1;
            q=b;
             for(int i=(b-1)*(b-1)+1;i<=b*b;i++)
        {
             if(i == ch)
            {
                cout<<p<<" "<<q<<endl;
                break;
            }


            if(i != ch)
            {
                p++;
                if(p>b)
                {
                   q=b-1;
                   p=b;

                }
                if(q!=0)
                {
                    q--;
                }

            }

        }
        }

    }

