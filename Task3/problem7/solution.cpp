#include<iostream>
#include<vector>
using namespace std;
int freq[10000];

int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
    }
    int m=0;
    int mm;
    for(int i=0;i<n;i++)
    {
        if(freq[arr[i]]>m)
        {
            m=freq[arr[i]];
            mm=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(freq[arr[i]]==m) v.push_back(arr[i]);
    }
    int mn=mm;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<mn)
            mn=v[i];
    }
    cout<<mn;
    return 0;
}
