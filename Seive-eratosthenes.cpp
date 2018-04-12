/**Sieve of eratosthenes**/
/**Author Tanim Ahmed**/

#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001
void primegen(int n)
{
    char prime[MAX];
    prime[0]=prime[1]=1;
    for(int i = 2;i<=sqrt(n);i++)//sqrt(n) je number dara katley hbe
    {
        if(prime[i]==0)
        {
            for(int j = i+i;j<=n;j+=i) //gunitok akare katakati korsi suppose 2 4 6 emn kre
            prime[j] = 1;
        }
    }
    for(int i = 2;i<=n;i++)
    {
        if(!prime[i])
            cout<<i<<" ";
    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        primegen(n);
    }
    return 0;
}

/*******Another Efficient Code******/

#include<iostream>
#include<cmath>
using namespace std;
#define MAX 100001
void primegen(int n)
{
    char prime[MAX];
    prime[0] = prime[1] = 1;
    int x =sqrt(n);
    for(int i = 4;i<=n;i+=2)
        prime[i]=1;
    for(int i = 3;i<=x;i+=2)
    {
        if(prime[i]==0)
        {
            for(int j = i+i;j<=n;j+=i)
           prime[j]=1;

        }
    }
    for(int i = 2;i<=n;i++)
    {
        if(!prime[i])
            cout<<i<<" ";
    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        primegen(n);
    }
    return 0;
}
