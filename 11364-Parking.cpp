/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    int n;
    int a;
    int mx;
    int mn;
    cin >> tc;
    while(tc--)
    {

        int MAX  = 0;
        int MIN = 99;
        cin >> n;
        for(int i = 0; i< n; i++)
        {
            cin >> a;
            if(a>MAX)
            {
               MAX = a;

            }
            if(a<MIN)
            {
               MIN = a;

            }
        }
        cout << (MAX-MIN)*2 << endl;

    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    int n;
    cin >> tc;
    while(tc--)
    { cin >> n;
        int a[n];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];

        }
        int max = a[0];
        int min = a[0];
        for(int i = 0 ; i < n; i++)
        {

            if(max<a[i])
            {
                max = a[i];
            }
            if(min>a[i])
            {
                min = a[i];
            }
        }
        cout << (max-min)*2 << endl;
    }
    return 0;
}
