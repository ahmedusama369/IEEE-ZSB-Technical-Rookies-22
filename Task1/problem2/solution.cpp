#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<2<<" "<<3<<" ";
    for(int i=4;i<n;i++)
    {
        int x=0;
        for(int j=2;j<=(i/2)+1;j++)
        {
            if(i%j==0) {
                x++;
                break;
            }

        }
        if(x==0) cout<<i<<" ";

    }
    return 0;
}
