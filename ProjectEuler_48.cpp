/*
#include<iostream>
using namespace std;
long long power(int a)
{
    int i;
    long long ans = 1;
    for(int i = 1;i<=a;i++)
    {
        ans*=a;
        ans = ans%10000000000;
    }
    return ans;
}
int main()
{
 int i;
 long long ans = 0;
 for(int i = 1;i<=1000;i++)
 {
     ans = (ans+power(i))%10000000000;
 }
 ans =(ans%10000000000);
 cout<<ans<<endl;

    return 0;
}
*/

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
