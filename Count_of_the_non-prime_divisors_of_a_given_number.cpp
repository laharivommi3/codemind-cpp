#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    int c=0;
    if(n<=1)
    return false;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    return true;
    else
    return false;
}
int main()
{
    int n,count=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(isPrime(i))
            {
                continue;
            }
            else
            {
                count++;
            }
        }
    }
    cout<<count;
}