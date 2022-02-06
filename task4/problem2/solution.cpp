#include<iostream>
using namespace std;

int main()
{
    string s;
    int n;
    cin>>s;
    cin>>n;
    int c=0;
    for(int i=0;i<s.size();i++)
        if(s[i]=='r') c++;
    int re=n/s.size();
    int m=n-(re*s.size());
    int sum=c*re;
    for(int j=0;j<m;j++)
        if(s[j]=='r') sum++;
    cout<<sum;
    return 0;
}
