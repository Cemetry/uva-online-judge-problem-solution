#include<iostream>
using namespace std;
int main()
{ int t = 1;

    int tc;
    int a[3];
    cin >> tc;
    while(tc--)
    {  int sum = 0;
        for(int i = 0 ;i < 3 ; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
        int mx = a[0];
        int mn = a[0];
        for(int i  = 0; i<3;i++)
        {
            if(a[i]>mx)
            {
                mx = a[i];
            }
            if(a[i]<mn)
            {
                mn = a[i];
            }
        }
        cout <<"Case"<<" "<<t++<<":"<<" " <<(sum-(mx+mn)) << endl;
    }
    return 0;
}
