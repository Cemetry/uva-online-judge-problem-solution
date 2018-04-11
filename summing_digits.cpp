/*
#include<iostream>
using namespace std;
int main()
{
    int sum ;
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        while(1)
        {
            sum = 0;
            while(n!=0)
            {
                sum+=n%10;
                n/=10;
            }
            if(sum/10==0)
                break;
            else
            {
                n = sum;
                sum = 0;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
*/
//***Recursion **/

#include<iostream>
using namespace std;
int func(int n)
{
    if(n<10)
        return n;
    int sum = 0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return func(sum);
}

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        cout <<func(n)<<endl;
    }
    return 0;
}
