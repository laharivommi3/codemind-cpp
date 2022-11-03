#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,gcd=0,min=0;
    cin>>a>>b;
    if(a<b)
    min=a;
    else
    min=b;
    for(i=min;;i--)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
            break;
        }
    }
    cout<<gcd;
}