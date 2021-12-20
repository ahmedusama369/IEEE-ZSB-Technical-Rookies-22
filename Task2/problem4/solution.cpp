#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int y=10000000;
    for(int i=0;i<n;i++) {
        int x = 0;
        for (int j = i+1; j < n; j++) {
            if (arr[i] == arr[j])
            {
                x=abs(i-j);
                if(x<y) y=x;
            }
        }
    }
    cout<<y;
    return 0;
}
