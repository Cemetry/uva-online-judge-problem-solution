
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{

    long int a,b,cy,cnt,ra,rb,sum,big;
    while(scanf("%ld%ld",&a,&b)==2)
    {
        if(a==0&&b==0)

            break;

        if(a>b)

            big = a;

        else

            big = b;

        int l = 0;
        while(big!=0)
        {
            big/=10;
            l++;
        }
        cnt = 0;
        cy = 0;
        while(l!=0)
        {
            ra = a%10;
            a/=10;
            rb = b%10;
            b/=10;
            sum = ra+rb+cy;
            if(sum>9)
            {

                cnt++;
                cy = sum/10;
            }
            else
                cy = 0;
            l--;
        }
        if(cnt==0)
            cout<<"No carry operation."<<endl;
        else if(cnt==1)
            cout<<"1 carry operation."<<endl;
            else
            cout<<cnt<<" "<<"carry operations."<<endl;
    }
    return 0;
}

