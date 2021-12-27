#include<iostream>
using namespace std;

int main()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    int t=false;
    while(1)
    {
        if(v1==v2 && x1!=x2)
            break;
        if(x1==x2) {
            t=true;
            break;
        }
        if(v1>v2 && x1>x2)
            break;
        else if(v2>v1 && x2>x1)
            break;
        x1=x1+v1;
        x2=x2+v2;
    }
    if(t==true) cout<<"YES";
    else cout<<"NO";
    return 0;
}
