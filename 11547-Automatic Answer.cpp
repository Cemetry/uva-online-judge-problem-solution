#include<iostream>
#include<cmath>
using namespace std;
int main()
{

 int tc;
 long long  n;
 long long m;
 cin >> tc;
 while(tc--)
{
    cin >> n;
    m = abs(((n*63+7492)*5)-498);
    m = m/10;

    cout << m%10 << endl;

}
    return 0;
}
