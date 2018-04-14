/**
Author:Tanim Ahmed
**/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char s[1001];

    while(gets(s))
    {
         int count = 0;
    int flag = 0;
    int i;
        for(i = 0;s[i];i++)
        {
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
                flag = 1;

        else
        {
            count+=flag;
            flag = 0;
        }
        }
        count+=flag;
        cout<<count<<endl;
    }
    return 0;
}
/**Another Example***/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1001];
    int len;
    while(gets(a))
    {
        int i;
        int cnt = 0;
        len = strlen(a);
        for(int i = 0;a[i]!='\0';i++)
        {
            if(isalpha(a[i])&&!isalpha(a[i+1]))
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
