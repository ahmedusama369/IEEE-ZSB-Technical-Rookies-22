#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    char r='r';
    int sum=0;
    int j=0;
    bool check=true;
    bool check2=true;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='U' && r!='D')
        {
            j++;
            check= false;
            check2=false;
        }
        if(s[i]=='D' && (r!='D' && check2== true))
        {
            j--;
            r='D';
        }
        else if(s[i]=='D' && (r!='D' && check2== false)) j--;
        else if(s[i]=='D' &&r=='D')
            j--;
        else if(s[i]=='U' && r=='D')
            j++;
        if(j==0 && check== true)
        {
            sum++;
            r='r';
            j=0;
        }
        if(j==0)
        {check=true; check2=true;}


    }
    cout<<sum;
    return 0;
}
