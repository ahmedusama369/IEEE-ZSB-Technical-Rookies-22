#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,c,m;
    cin>>n>>c>>m;
    int sum=n/c;
    int i=sum;
    while(true)
    {
        int s2=i/m;
        int s3=i%m;
        if(i>=m)
        {
            sum=sum+s2;
        }
        else
            break;
        i=s2+s3;
    }
    cout<<sum;

    return 0;
}
