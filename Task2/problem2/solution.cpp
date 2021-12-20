#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int> v;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1]) v.push_back(arr[i]);
    }
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<arr[n-1];
    return 0;
}
