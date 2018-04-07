#include<iostream>
#include<string>
using namespace std;
int main()
{  int t = 1;
    string a;
    string b ="Hajj";
    while(cin>>a)
    {
        if(a=="*")
            break;
        if(a.compare(b)!=0)
        {
            cout <<"Case"<<" "<<t++<<":"<<" "<<"Hajj-e-Asghar"<<endl;
        }
        else
        {
            cout<<"Case"<<" "<<t++<<":"<<" "<<"Hajj-e-Akbar"<<endl;
        }
    }
    return 0;
}
