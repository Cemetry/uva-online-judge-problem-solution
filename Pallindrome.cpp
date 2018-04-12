/**Write a program for checking pallindrome**/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string str;
    string str2;
    getline(cin,str);
    str2=str;
    reverse(str.begin(),str.end());
    if(str==str2)
        cout<<"YES Pallindrome"<<endl;
    else
        cout<<"NO it's not pallindrome"<<endl;
    return 0;
}

/**Another method for checking pallindrome**/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    if(equal(s.begin(),s.begin()+s.size()/2,s.rbegin()))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
