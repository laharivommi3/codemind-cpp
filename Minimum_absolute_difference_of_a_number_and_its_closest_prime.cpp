#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    int c=0;
    if(n==1)
    return false;
    for(int i=2;i<=(int)sqrt(n);i++)
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
        int n,d1=0,d2=0,diff1,diff2;
        cin>>n;
        if(isPrime(n))
        cout<<"0";
        else
        {
        for(int i=n;;i++)
        {
            if(isPrime(i))
            {
                d1=i;
                break;
            }
        }
        diff1=d1-n;
        for(int i=n;i>=2;i--)
        {
            if(isPrime(i))
            {
                d2=i;
                break;
            }
        }
        diff2=n-d2;
        cout<<min(diff1,diff2);
        }
}
        