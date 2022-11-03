#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sq,r,sum=0;
    cin>>n;
    sq=n*n;
    while(sq>0)
    {
        r=sq%10;
        sum=sum+r;
        sq=sq/10;
    }
    if(sum==n)
    cout<<"Neon Number";
    else
    cout<<"Not Neon Number";
}