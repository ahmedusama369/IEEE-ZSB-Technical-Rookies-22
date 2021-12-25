#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v;
    int arr[n];
    int arr1[m];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<m;i++) cin>>arr1[i];
    int *my= max_element(arr,arr+n);
    int mm=*my;
    int *mi= min_element(arr1,arr1+m);
    int mn=*mi;
    for(int i=mm;i<=mn;i++)
    {
        bool t=true;
        for(int j=0;j<n;j++)
        {
            if(i%arr[j]!=0) {
                t = false;
                break;
            }
        }
        if(t==true) v.push_back(i);
    }
    int sum=v.size();
    for(int i=0;i<v.size();i++)
    {
        bool t=true;
        for(int j=0;j<m;j++)
        {
            if(arr1[j]%v[i]!=0)
            {
                t=false;
                break;
            }
        }
        if(t==false) sum--;
    }
    cout<<sum;
    return 0;
}
