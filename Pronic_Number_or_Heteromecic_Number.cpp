#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n,x;
        cin>>n;
        x=int(sqrt(n));
        if(x*(x+1)==n)
        cout<<"YES";
        else
        cout<<"NO";
}