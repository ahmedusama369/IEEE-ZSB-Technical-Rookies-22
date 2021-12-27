#include<iostream>
using namespace std;
int fre[100000];

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        fre[arr[i]]++;
    }
    int m=0;
    for(int i=0;i<n;i++)
    {
        if(fre[arr[i]]!=-1)
        {
            m=m+fre[arr[i]]/2;
            fre[arr[i]]=-1;
        }
    }
    cout<<m;



    return 0;
}
