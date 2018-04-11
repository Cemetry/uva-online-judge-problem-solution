
/*********uses of bitwise operator****/
/**EVEN ODD CHECKING**/
#include<iostream>
using namespace std;
int even(int n)
{
    if(n&1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
int main()
{
    cout<<"Enter num"<<endl;
    int n;
    cin>>n;
    even(n);
    return 0;
}

/*******Checking power of 2 *******/

#include<iostream>
using namespace std;
int pow(int n)
{
    if(n&(n-1))
        cout<<"NO"<<endl;
    else
        cout<<"YES POWER OF 2"<<endl;
}
int main()
{
    int n;
    while(1)
    {
        cin>>n;
       pow(n);
        if(n==0)
            break;
    }
    return 0;
}

/***Checking pow(2,n)-1*******/

#include<iostream>
using namespace std;
int pow(int n)
{
    if(n&(n+1))
        return 0;
    else
        return 1;
}
int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(pow(n))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

/**LEFT SHIFT OPERATOR***/

#include<iostream>
using namespace std;
int main()
{
   cout<<(7<<1)<<endl;
   cout<<(7<<2)<<endl;
   cout<<7*(2<<2)<<endl;


    return 0;
}


/****Right shift operator*****/

#include<iostream>
using namespace std;
int main()
{
    cout<<(100>>1)<<endl;
    cout<<(100>>2)<<endl;

}

/********Swapping ****/

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the numbers"<<endl;
    cin>>a>>b;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<"A:"<<a<<" "<<"B:"<<b<<endl;
    return 0;

}

/***MOD where y = pow(2,n)1-***/
#include<iostream>
using namespace std;
int mod(int x,int y)
{
    return (x&(y-1));

}
int main()
{
    int x,y;
    cout<<"Enter the numbers"<<endl;

    cin>>x>>y;
    cout<<mod(x,y)<<endl;
    return 0;
}
