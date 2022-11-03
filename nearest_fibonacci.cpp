#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n,a=0,b=1,c=0;
        cin>>n;
        while(c<=n)
        {
            c=a+b;
            a=b;
            b=c;
        }
        if(n-a>b-n)
        cout<<b;
        else if(n-a==b-n)
        cout<<a<<" "<<b;
        else
        cout<<a;
}