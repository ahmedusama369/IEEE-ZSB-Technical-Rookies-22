#include<iostream>
using namespace std;

int main()
{
    int n,p,l,r,v;
    cin>>n;
    cin>>p;
    l=(p-0)/2;
    r=(n-p)/2;
    if(n-p==1 && n%2!=0 && n!=2)
        v=1;
    else if(l<r)
        v=l;
    else
        v=r;
    cout<<v;
    return 0;
}
