#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int mx=arr[0];
    int mn=arr[0];
    int cm=0;
    int cn=0;
    for( int i=1;i<n;i++)
    {
        if(arr[i]>mx)
        {
            cm++;
            mx=arr[i];
        }
        else if(arr[i]<mn)
        {
            cn++;
            mn=arr[i];
        }
    }
    cout<<cm<<" "<<cn;
    return 0;
}
