/*
#include<bits/stdc++.h>
using namespace std;
long long int bigmod(long long a,long long p,long long m)
{
    if(p==0)
        return 1;
    if(p%2)
    {
        return ((a%m)*bigmod(a,p-1,m))%m;
    }
    else
    {
        long long c = bigmod(a,p/2,m);
        return ((c%m)*(c%m)%m);
    }
}
int main()
{
 long long a,p,m;
 while(cin>>a>>p>>m)
 {
     cout<<bigmod(a,p,m)<<endl;
 }
 return 0;
}
*/
#include<iostream>
using namespace std;
long long bigmod(long long a,long long p,long long m)
{
    if(p==0)
        return 1;
    else if(p%2)
    {
        return ((a%m)*bigmod(a,p-1,m))%m;
    }
    else
    {
        long long c = bigmod(a,p/2,m);
        return ((c%m)*(c%m)%m);
    }
}

int main()
{
    long long a,p,m;
    while(cin>>a>>p>>m)
    {
        cout <<bigmod(a,p,m)<<endl;
    }
    return 0;
}
