#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s1+=a[i];
        }
        else
        {
            s2+=a[i];
        }
    }
    int diff=s1-s2;
    int maxx=diff*diff;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s1-=a[i];
        }
        else
        {
            s2-=a[i];
        }
        diff=s1-s2;
        if(maxx<diff*diff)
        {
            maxx=diff*diff;
        }
    }
cout<<maxx;
    return 0;
}
