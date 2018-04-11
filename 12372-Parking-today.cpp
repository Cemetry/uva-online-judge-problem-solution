
#include<iostream>
using namespace std;
int main()
{
    int tc;
    int t = 1;
    int l,w,h;
    cin>>tc;
    while(tc--)
    {
        cin>>l>>w>>h;
        if(l<=20&&w<=20&&h<=20)
        {
        cout<<"Case"<<" "<<t++<<":"<<" "<<"good"<<endl;
        }
        else
        {
            cout<<"Case"<<" "<<t++<<":"<<" "<<"bad"<<endl;
        }
    }
    return 0;
}
