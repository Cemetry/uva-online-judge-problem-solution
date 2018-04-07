
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int tc;
    int n;
    int sum = 0;
    char s[100];
    cin >> tc;
    while(tc--)
    {
        scanf("%s",s);
        if(strcmp(s,"donate")==0)
        {
            cin >> n;
            sum +=n;
        }
        else
        {
            cout << sum << endl;
        }
    }
    return 0;
}
