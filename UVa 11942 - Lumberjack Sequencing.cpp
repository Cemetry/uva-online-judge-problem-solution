/********Tanim Ahmed********/
/******Date::4/14/2018 time:5.14 AM*********/
#include<iostream>
using namespace std;
int main()
{
    int tc;
    int a,b;
    int f,s;
    cin>>tc;
    cout<<"Lumberjacks:"<<endl;
    while(tc--)
    {
        f = s = false;
        cin>>a;
        for(int i = 0;i<9;i++)
        {
            cin>>b;
            if(a<b)
                f = true;
            else
                s= true;
            a = b;
        }

        if(f&&s)
            cout<<"Unordered"<<endl;
        else
            cout<<"Ordered"<<endl;
    }
    return 0;
}

