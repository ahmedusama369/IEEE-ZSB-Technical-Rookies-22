#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        cin >> arr[i];
        sum=sum+x;
    }
    sort(arr,arr+n);
    int sum2=arr[n-1]+arr[n-2];
    if(sum2>=sum)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
