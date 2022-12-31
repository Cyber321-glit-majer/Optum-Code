#include <bits/stdc++.h> 
long long findValueWhoseXORWithGivenNumberIsMaximum(long long X)
{
    /*-long long y=2305843009213693951;
    long long ans=(X^y);
    return ans;*/
    int m=61;
    long long l=(1LL<<m)-1;
    return l^X;
    
    
    
}
