#include<iostream>
#include<string>
using namespace std;

int main()
{
    int m;
    int n;
    cin>>m;
    while(m--){
    cin>>n;
    int c=0;
    string s;
    s= to_string(n);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='0'){
        int a=s[i]-48;
        if(n%a==0)
            c++;}
        else if(s[i]=='0') continue;
    }
    cout<<c;}
    return 0;

}
