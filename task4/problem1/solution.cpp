#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int min=10000000000;
    for(int i=0;i<n;i++)
    {
        int s=i;
        int end=-1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]==arr[i]) end=j;
        }
        if(end!=-1)
        {
            if(min>abs(s-end));
                min=abs(s-end);
        }
    }
    cout<<min;
    return 0;
}
