
//brute force approach

#include<bits/stdc++.h>
using namespace std;
bool solve(int num) {
    int curoot;
   curoot=round(pow(num, 1.0/3.0));
   if(curoot*curoot*curoot==num)
   return 1;
   else
   return 0;
}
int main()
{
   int a[]={2,5,1,20,6};
    int n=sizeof(a)/sizeof(a[0]);
    int cnt=0;
    //8, 27, 64 
    unordered_set<int>s;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                
                if(solve(a[i]+a[j]+a[k]))
                {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}
