/**Efficent Function for checking power**/

#include<iostream>
using namespace std;
int power(int first,int second)
{
    int res=1;
    while(second--)
    {
        res = res*first;
    }
    return res;
}
int main()
{
    int f,s;
    cout<<"First and then second"<<endl;
    cin>>f>>s;
    cout<<power(f,s)<<endl;
    return 0;
}


/*****Another Example****/

#include<iostream>
using namespace std;
int Pow(int a,int n)
{
    if(n==1)
        return a;
    if(n%2==1)
        return a*Pow(a,n-1);
    int temp;
    temp = Pow(a,n/2);
    return temp*temp;
}
int main()
{
    int a,n;
    cout<<"Enter the number"<<endl;
    cin>>a>>n;
    cout<<Pow(a,n)<<endl;
    return 0;
}


/**Fast Exponent time limit..0.000s**/

#include<bits/stdc++.h>
using namespace std;
int Pow(int a,int n)
{
    string bin="";
    int temp;
    while(n>0)
    {
        temp = n%2;
        if(temp==0)
            bin+="0";
        else
            bin+="1";
        n/=2;
    }
    reverse(bin.begin(),bin.end());
    int res = 1;
    for(int i = 0;i<bin.size();i++)
    {
        res = res*res;
        if(bin[i]=='1')
            res = a*res;
    }
    return res;
}
int main()
{
    int a,n;
    cout<<"Enter the number"<<endl;
    cin>>a>>n;
    cout<<Pow(a,n)<<endl;
    return 0;
}

