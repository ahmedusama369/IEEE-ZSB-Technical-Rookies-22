#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=1;i<n;i++)
    {
        int cu=arr[i];
        int j=i;
        while(arr[j]<arr[j-1] && j>0)
        {
            int ch=arr[j-1];
            arr[j-1]=cu;
            arr[j]=ch;
            j--;
        }
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
